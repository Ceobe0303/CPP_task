#include<stdio.h>
#include<math.h>

char get_cho(void){
    char ch;

    printf("Enter the operation of your choice:\n"
        "a. add\ts. subtract\n"
        "m. multiply\td. divide\n"
        "q. quit\n");

    while(1){
        ch = getchar();

        while(getchar() != '\n');

        if(ch == 'a' || ch == 's' || ch == 'm' || ch == 'd' ||ch == 'q'){
            return ch;
        }else{
            printf("竟然敢整俺！！！\n");
        }
    }
}

double get_num(const char *n){
    double num;
    char s[67];

    printf("%s",n);

    while(scanf("%lf",&num) != 1){
        scanf("%66s",s);
        printf("%s is not an number",s);
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    while(getchar() != '\n');

    return num;
}

int main(){
    char choice;
    double num1, num2;
    
    while(1){

        //1. 读选择
        choice = get_cho();

        if(choice == 'q'){
            printf("Bye.\n");
            break;
        }

        //2. 读两个数
        num1 = get_num("Enter first number:");
        num2 = get_num("Enter second number:");

        //3. 执行
        switch (choice)
        {
        case 'a':
            printf("%g + %g = %g\n",num1,num2,num1 + num2);
            break;
        case 's':
            printf("%g - %g = %g\n",num1,num2,num1 - num2);
            break;
        case 'm':
            printf("%g * %g = %g\n",num1,num2,num1 * num2);
            break;
        case 'd':
            while(fabs(num2) < 1e-12f){
                num2 = get_num("Enter a number other than 0: ");
            }
            printf("%g / %g = %g\n",num1,num2,num1 / num2);
            break;
        default:
            break;
        }
    }

    return 0;
}