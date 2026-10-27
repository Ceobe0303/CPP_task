#include<stdio.h>

int main(){
    double s,gal,v;
    printf("输入旅行的里程:\n");
    scanf("%lf",&s);
    printf("输入消耗的汽油量:\n");
    scanf("%lf",&gal);

    v = s / gal;
    printf("%.1lf加仑/英里\n",v);

    double re_v;
    re_v = (gal * 3.785) / (s * 160.9);
    printf("%.1lf升/100公里\n",re_v); 

    return 0;
}