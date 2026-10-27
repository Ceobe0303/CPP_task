#include<stdio.h>

void Temperatures(double hua){
    double she, kai;
    she = 5.0 / 9.0 * (hua - 32.0);
    printf("摄氏温度为：%.2f\n",she);

    kai = she + 273.16;
    printf("开氏温度为：%.2f\n",kai);
}

int main(){
    double hua;
    printf("输入华氏温度：");
    while(scanf("%lf",&hua) == 1){
    Temperatures(hua);
    printf("输入华氏度：");
    }
    return 0;
}