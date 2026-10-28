#include<stdio.h>
#include<stdbool.h>

bool isprime(int n){
    if(n == 1) return 0;
    if(n < 4) return 1;
    if(n == 5) return 1;
    if((n % 2) == 0 || (n % 3) == 0) return 0;
    for(int i = 5; i <= (n / i); i += 6){
        if((n % i) == 0 || (n % (i+2)) == 0) return 0;
    }
    return 1;
}

int main(){
    int n;


    while(1){
        printf("输入一个正整数：");
        if(scanf("%d",&n) != 1 || n <= 0){
            printf("错误输入!\n");
            while(getchar() != '\n');
        }else{
            break;
        }
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        
        if(isprime(i)){
            printf("%d\t",i);
            cnt++;
            if(cnt >= 10) printf("\n");
            cnt = 0;
        }

    }
    return 0;
}
