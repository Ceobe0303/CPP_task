#include<stdio.h>
#include<stdlib.h>

int main(){
    int cnt[10];
    int num;

    for(int seed = 1; seed <= 10; seed++){
        srand(seed);

        for(int i = 0; i < 10; i++){
            cnt[i] = 0;
        }

        for(int i = 0; i < 1000; i++){
            num = rand() % 10 + 1;
            cnt[num - 1]++;
        }

        printf("种子: %d\n", seed);
        for(int i = 0; i < 10; i++){
            printf("数字 %d 出现了 %d 次\n", i + 1, cnt[i]);
        }
        printf("\n");
    }
    return 0;
}
