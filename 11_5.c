#include<stdio.h>
#include<string.h>

char * my_strchr(const char * str, char c){
    while(*str != '\0'){
        if(*str == c){
            return (char *)str;
        }
        str++;
    }

    if(c == '\0'){
        return (char *)str;
    }

    return NULL;
}

int main(){
    char str[100];
    char target;
    char *result;

    while(1){
        printf("输入一段字符(q 退出):\n");

        if(fgets(str, sizeof(str), stdin) == NULL){
            break;
        }

        str[strcspn(str,"\n")] = '\0';
        
        if(strcmp(str, "q") == 0){
            break;
        }

        printf("输入需要查找的字符：");
        scanf("%c",&target);

        while(getchar() != '\n');

        result = my_strchr(str, target);

        if(result != NULL){
            printf("%s\n",result);
        }else{
            printf("没找到\n");
        }
    }
    return 0;
}