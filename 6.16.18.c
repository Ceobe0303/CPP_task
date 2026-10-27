#include<stdio.h>

int main(){
    int friend = 5;
    int week = 1;
    while (friend < 150){
        friend -= week;
        friend *= 2;
        printf("week:%4d;friend:%4d\n",week++,friend);
    }
    return 0;
}