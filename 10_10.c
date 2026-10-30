#include <stdio.h>

void add_arr(const int *a, const int *b, int *c, int n){
    for(int i = 0; i < n; i++){
        c[i] = a[i] + b[i];
    }
    return;
}

int main(){
    int n;
    int a1[67];
    int a2[67];
    int a3[67];

    printf("数字个数为：\n");

    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d",&a1[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d",&a2[i]);
    }

    add_arr(a1, a2, a3, n);

    for(int i = 0; i < n; i++){
        if(i == 0){
            printf("%d",a3[i]);
        }else{
            printf(" %d",a3[i]);
        }
        
    }
    return 0;
    
}