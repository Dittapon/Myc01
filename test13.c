#include <stdio.h>
#define pa printf("---------------------------\n");

int main (){
    int number;

    pa
    printf("  Even & Odd number\n");
    pa
    while( 1 ){  //วนแบบ infinite loop
        printf("Enter number : ");
        scanf("%d", &number);
        if(number <= 0){
            pa
            break;
        }
        if (number % 2 == 0){
            printf("Number is even number\n");
        }else{
            printf("Number is odd number\n");
        }
        pa
        
    }
    

    return 0;
}