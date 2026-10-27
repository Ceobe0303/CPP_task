#include<stdio.h>
#define SIXTY 60

int main(){
    int min;
    int h = 0;
    do{
        printf("输入分钟：");
        scanf("%d",&min);

        while(min >= SIXTY){
            h++;
            min -= SIXTY;
        }

        printf("%dh %dmin\n",h,min);
        h = 0;
    }while(min > 0);

    return 0;
}