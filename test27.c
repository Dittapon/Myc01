#include <stdio.h>

typedef struct{
    int info1;
    float info2;
} Iot;

int main(){
    int x = 999;
    int *p_x = &x;
    Iot stuA = {10, 111.111};
    Iot stuB = {20, 222.222};

    Iot *p_stuA = &stuA;

    printf("%p\n", &stuA);
    printf("%p\n", p_stuA);
    printf("%d\n", stuA.info1); //10
    printf("%d\n", p_stuA->info1); //10

    printf("%d\n", x);    //999
    printf("%d\n", *p_x); //999


    return 0;
}