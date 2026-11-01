#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(){
    char src_filename[256], dest_filename[256];
    FILE *src_file, *dest_file;
    int ch;

    printf("请输入源文件名: ");
    if(scanf("%255s", src_filename) != 1){
        printf("输入无效。\n");
        return 1;
    }

    strcpy(dest_filename, src_filename);
    strcat(dest_filename, ".upper");

    src_file = fopen(src_filename, "r");
    if(src_file == NULL){
        printf("无法打开源文件: %s\n", src_filename);
        return 1;
    }

    dest_file = fopen(dest_filename, "w");
    if(dest_file == NULL){
        printf("无法创建目标文件: %s\n", dest_filename);
        fclose(src_file);
        return 1;
    }

    while((ch = fgetc(src_file)) != EOF){
        fputc(toupper(ch), dest_file);
    }

    fclose(src_file);
    fclose(dest_file);
    return 0;
}