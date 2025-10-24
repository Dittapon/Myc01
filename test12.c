#include <stdio.h>
#define pa printf("----------------------\n");

int main(){
    int number1, result;
    int i;

    pa 
    printf("    Multiplication Table\n");
    pa
    printf("Enter number :");
    scanf("%d", &number1);
    pa

    for(i = 1 ; i <= 12; i = i + 1){           // ++i, i++, i += i
        result = number1 * i;
        printf("%d x %d = %d\n", number1, i, result);
    }

    pa

    return 0;
}