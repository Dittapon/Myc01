#include <stdio.h>

#define showpa printf("---------------------------\n");


int main (){
    int num1, num2, sum;   //%d

    showpa
    printf("       SUM NUMBER\n");
    showpa
    do{
        printf("Enter number 1:");
        scanf("%d", &num1);
        printf("Enter number 2:");
        scanf("%d", &num2);
        sum = num1 + num2;
        printf("sum of %d and %d is: %d\n", num1, num2, sum);
        showpa


    }while( sum <= 999);

    return 0;
}