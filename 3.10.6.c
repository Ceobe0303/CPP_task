#include<stdio.h>

int main(){
    double quarts;
    double water;

    printf("水的夸脱数：");
    scanf("%lf",&quarts);

    water = (quarts * 950.0) / 3.0e-23;

    printf("%e\n",water);
    return 0;
}