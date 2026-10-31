#include<stdio.h>

double average(const double arr[5]){
    double sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    double aver = sum / 5;

    return aver;
}

double average_all(const double arr[3][5]){
    double sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            sum += arr[i][j];
        }
    }

    return sum / 15.0;
}

double max_arr(const double arr[3][5]){
    double max = arr[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main(){
    double arr[3][5];
    double aver0,aver1,aver2,aver3;
    double max;

    printf("输入三组5个double类型的数:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            scanf("%lf",&arr[i][j]);
        }
    }

    aver0 = average(arr[0]);
    aver1 = average(arr[1]);
    aver2 = average(arr[2]);
    aver3 = average_all(arr);
 
    max = max_arr(arr);
    
    
    printf("第一组平均数为：%lf\n",aver0);
    printf("第二组平均数为：%lf\n",aver1);
    printf("第三组平均数为：%lf\n",aver2);
    printf("总平均数为：%lf\n",aver3);
    printf("最大值为：%lf",max);

    return 0;
}