#include<stdio.h>

int main(){
    char ch;
    printf("输入一个大写字母：");
    ch = getchar();

    if(ch >= 'A' && ch <= 'Z'){
        int n = ch - 'A';
        //行计数
        for(int i = 0; i <= n; i++){
            //空格计数
            for(int j = n - i; j > 0; j--){
                printf(" ");
            }

            //前字母
            for(char t = 'A'; t <= 'A' + i; t++){
                printf("%c",t);
            }

            //后字母
            for(char t = 'A' + i - 1; t >= 'A'; t--){
                printf("%c",t);
            }
            printf("\n");
        }
    }else{
        printf("错误输入！！！");
    }
    return 0;
}