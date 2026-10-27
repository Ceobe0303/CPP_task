#include<stdio.h>

int main(){
    printf("输入一个浮点数：");
    double n;
    scanf("%lf",&n);


    printf("%f\n",n);
    printf("%e\n",n);
    printf("%+f\n",n);
    printf("%+E\n",n);
    return 0;
}