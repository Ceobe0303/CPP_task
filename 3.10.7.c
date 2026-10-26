#include<stdio.h>

int main(){
    double inch;
    printf("输入身高（/英寸）:");
    scanf("%lf",&inch);

    double cm = inch * 2.54;
    printf("%.2lf",cm);
    return 0;
}