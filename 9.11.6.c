#include<stdio.h>

void compare(double *a, double *b, double *c){
    double temp;
    
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    return;
}

int main(){
    double a, b, c;
    printf("输入三个数：\n");

    while(1){
        if(scanf("%lf %lf %lf",&a,&b,&c) != 3){
            printf("重新输入\n");
            while(getchar() != '\n');
        }else{
            break;
        }
    }

    compare(&a,&b,&c);

    printf("%g %g %g",a,b,c);
    return 0;
}