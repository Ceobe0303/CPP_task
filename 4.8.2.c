#include<stdio.h>
#include<string.h>

int main(){
    char first_name[20], last_name[20];
    int ch;
    int i = 0;

    printf("输入名：");
    while((ch = getchar()) != '\n' && ch != EOF){
        if (i < sizeof(first_name) - 1){
            first_name[i++] = (char)ch;
        }
    }
    first_name[i] = '\0';
    i = 0;

    printf("输入姓：");
    while((ch = getchar()) != '\n' && ch != EOF){
        if(i < sizeof(last_name) - 1){
            last_name[i++] = (char)ch;
        }
    }
    last_name[i] = '\0';
    i = 0;

    char name[41];
    snprintf(name, sizeof(name), "%s %s", first_name,last_name);
    int len = strlen(name) + 3;

    printf("|\"%s,%s\"|\n", first_name, last_name);
    printf("|\"%20s,%20s\"|\n", first_name, last_name);
    printf("|\"%-20s,%-20s\"|\n", first_name, last_name);
    printf("|%*s|\n",len, name);
    return 0;
}