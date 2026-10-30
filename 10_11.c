#include<stdio.h>

void show_arr(const int arr[][5]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(j == 0){
                printf("%d",arr[i][j]);
            }else{
                printf(" %d",arr[i][j]);
            }
            
        }
        printf("\n");
    }
}

void double_arr(int arr[][5]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            arr[i][j] *= 2;
        }
    }
}

int main(){
    int arr[3][5] = {{1,2,3,4,5,},{6,7,8,9,10,},{11,12,13,14,15}};

    printf("第一次————————————————————————————————————\n");
    show_arr(arr);

    double_arr(arr);

    printf("第二次————————————————————————————————————\n");
    show_arr(arr);

    return 0;
}