#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char file1[256], file2[256];
    char line1[1024], line2[1024];
    FILE *fp1, *fp2;

    printf("请输入第一个文件名: ");
    if(scanf("%255s", file1) != 1){
        printf("输入无效。\n");
        return 1;
    }

    printf("请输入第二个文件名: ");
    if(scanf("%255s", file2) != 1){
        printf("输入无效。\n");
        return 1;
    }

    fp1 = fopen(file1, "r");
    if(fp1 == NULL){
        fprintf(stderr, "无法打开文件: %s\n", file1);
        return 1;
    }
    fp2 = fopen(file2, "r");
    if(fp2 == NULL){
        fprintf(stderr, "无法打开文件: %s\n", file2);
        fclose(fp1);
        return 1;
    }

    while(1){
        char *res1 = fgets(line1, sizeof(line1), fp1);
        char *res2 = fgets(line2, sizeof(line2), fp2);

        if(res1 != NULL){
            line1[strcspn(line1, "\n")] = 0;
            printf("%s", line1);
        }

        if(res1 != NULL && res2 != NULL) {
            printf(" | "); 
        }

        if (res2 != NULL) {
            line2[strcspn(line2, "\n")] = '\0';
            printf("%s", line2);
        }

        printf("\n");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}