#include<stdio.h>

int count(void){
    static int counter = 0;
    counter++;
    return counter;
}

int main(){
    int idx = 0;

    while(1){
        printf("第 %d 次调用 count() 函数\n", count());
        idx++;
        if(idx >= 10){
            break;
        }
    }

    
    return 0;
}