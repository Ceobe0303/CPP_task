#include<stdio.h>

int main(){
    printf("输入一周工作的小时数:");
    double hours;
    scanf("%lf",&hours);

    double sum = 0.0;
    double tax = 0.0;
    double profit = 0.0;

    
    if(hours > 40.0){
        hours = (hours - 40.0) * 1.5 + hours;
    }
    
    sum = 1000.0 * hours;

    if(sum <= 300.0){
        tax = sum * 0.15;
        profit = sum - tax;

    }else if(sum > 300.0 && sum <= 450){
        tax = 300.0 * 0.15 + (sum - 300.0) * 0.2;
        profit = sum - tax;

    }else{
        tax = 300.0 * 0.15 + 150.0 * 0.2 + (sum - 450) * 0.25;
        profit = sum - tax;

    }
    
    printf("工资总额:%.3lf$\n",sum);
    printf("税金:%.3lf$\n",tax);
    printf("净收入:%.3lf$\n",profit);

    return 0;
}