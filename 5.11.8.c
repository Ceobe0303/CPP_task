#include<stdio.h>

int main(){
    int n,m;
    printf("This program computes moduli.\n");
    
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d",&n);
    
    printf("\nNow enter the first operand: ");
    scanf("%d",&m);

    printf("\n%d %% %d is %d", m, n, m % n);

    while(m > 0){
        printf("\nEnter next number for first operand (<= 0 to quit): ");
        scanf("%d",&m);
        printf("\n%d %% %d is %d", m, n, m % n);
    }
    return 0;
}