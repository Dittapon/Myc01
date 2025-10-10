//รับค่าชื่อ-สกุล อายุ เงินเดือน แล้วแสดงผลออกมา

#include <stdio.h>
#define showline printf("-----------------------------\n");

int main(){
    char fullname[50];    //%s, %[^\n]
    int age;              //%d
    float salary;         //%f

    showline
    printf("  Profile Information   \n");
    showline
    printf("Enter your fullname:");
    scanf("%[^\n]",&fullname);
    printf("Enter your age:");
    scanf("%d" , &age);
    printf("Enter your salary: ");
    scanf("%f" , &salary);
    showline
    printf("Hello %s\n" , fullname);
    printf("you are %d year old.\n" , age);
    printf("your salary is %.2f bath.\n", salary);
    showline

    return 0;
}