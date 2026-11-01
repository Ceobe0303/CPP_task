#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    FILE *fp;
    int ch;

    if(argc < 2){
        fprintf(stderr, "用法: %s <filename>\n", argv[0]);
        return 1;
    }

    for(int i = 0; i < argc; i++){

        fp = fopen(argv[i], "r");
        if(fp == NULL){
            fprintf(stderr, "无法打开文件: %s\n", argv[i]);
            perror("错误原因");
            continue;
        }

        printf("文件 %s 的内容:\n", argv[i]);
        while((ch = fgetc(fp)) != EOF){
            putchar(ch);
        }
        fclose(fp);
    }
    return 0;

}