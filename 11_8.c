#include<stdio.h>
#include<string.h>

char * string_in(const char *str1, const char *str2){

    if(*str2 == '\0'){
        return (char *)str1;
    }

    while(*str1 != '\0'){
        const char *P1 = str1;
        const char *P2 = str2;

        while(*P1 != '\0' && *P2 != '\0' && *P1 == *P2){
            P1++;
            P2++;
        }

        if(*P2 == '\0'){
            return (char * )str1;
        }
        str1++;
    }

    return NULL;
}

int main(){
    char main_str[100];
    char sub_str[100];
    char *result;

    while(1){
        printf("输入主字符串：");
        if(fgets(main_str,sizeof(main_str),stdin) == NULL){
            break;
        }

        main_str[strcspn(main_str, "\n")] = '\0';

        if(main_str[0] == '\0'){
            break;
        }

        printf("输入子字符串：");
        if(fgets(sub_str,sizeof(sub_str),stdin) == NULL){
            break;
        }

        sub_str[strcspn(sub_str, "\n")] = '\0';

        result = string_in(main_str,sub_str);

        if(result != NULL){
            printf("找到了，剩余部分为%s\n",result);
        }else{
            printf("没找到\n");
        }
        
    }
    return 0;
}