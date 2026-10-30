#include <stdio.h>

unsigned long long Fibonacci(int n);

int main() {
    int n;
    printf("输入一个数：");

    while(scanf("%d",&n) == 1){

        if(n <= 0){
            printf("错误输入！\n");
        }else{
            unsigned long long result = Fibonacci(n);
            printf("第%d项斐波那契数为%lld。\n",n,result);
        }
        printf("再输入一个数(输入q退出):");
    }
    return 0;
}


unsigned long long Fibonacci(int n) {
    
    if(n == 1 || n == 2) return 1;

    unsigned long long pre = 1;
    unsigned long long cur = 1;
    unsigned long long nex = 0;

    for(int i = 3; i <= n; i++){
        nex = pre + cur;
        pre = cur;
        cur = nex;
    }
    return cur;
}