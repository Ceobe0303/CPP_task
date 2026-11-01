#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    char **words;
    char temp[128];

    printf("请输入单词的个数: ");
    if(scanf("%d", &n) != 1 || n <= 0){
        printf("输入无效，请输入一个正整数。\n");
        return 1;
    }

    words = (char **)malloc(n * sizeof(char *));
    if(words == NULL){
        printf("内存分配失败。\n");
        return 1;
    }

    printf("请输入 %d 个单词:\n", n);
    for(int i = 0; i < n; i++){
        if(scanf("%s", temp) != 1){
            printf("输入无效。\n");
            free(words);
            return 1;
        }

        words[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        if(words[i] == NULL){
            printf("内存分配失败。\n");
            for(int j = 0; j < i; j++){
                free(words[j]);
            }
            free(words);
            return 1;
        }
        strcpy(words[i], temp);
    }

    printf("输入的单词是:\n");
    for(int i = 0; i < n; i++){
        printf("%s\n", words[i]);
    }

    for(int i = 0; i < n; i++){
        free(words[i]);
    }
    free(words);

    return 0;
}