#include<stdio.h>

int main(){
    int n ;
    printf("输入年龄");
    scanf("%d",&n);
    unsigned long long t = n * 31560000;
    printf("%lld",t);
    return 0;
}