#include<stdio.h>

int main(){
    int low = 1;
    int high = 100;
    int guess = (low + high) / 2;
    char ch;

    printf("_______________猜数游戏_______________\n");
    printf("想一个1到100的数\n");
    printf("如果我猜对了，输入'y'\n");
    printf("如果我猜大了，输入'h'\n");
    printf("如果我猜小了，输入'l'\n");
    printf("Let's Gooooooooooooooooooooooooooooo!\n");

    printf("这个数是%d吗?\n",guess);

    while(1){
        ch = getchar();
        while(getchar() != '\n'){
            continue;
        }
    

        if(ch == 'y'){
            printf("\033[1;32m______________________________________________________\n");
            printf("都是铜陵人，我原本没想酱味大鸡！！！！！\n");
            printf("真的很帅！\n");
            break;
        }else if(ch == 'h'){
            high = guess - 1;
        }else if(ch == 'l'){
            low = guess + 1;
        }else{
            printf("真的假的？");
            continue;
        }

        if(high < low){
            printf("\033[1m康神开播了，真的假的？\n");
            break;
        }

        guess = (high + low) / 2;
        printf("那是%d吗\n",guess);

    }
    return 0;
}