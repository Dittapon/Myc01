//เขียนโปรแกรมแสดงข้อความ Iot-SAU
//แสดงผลการคำนวณของ 2 ยกกำลัง 500
//" " double quote, ' ' single quote, # hash, / slash, \ backslash
//{ } curly brackets, [ ] square brackets, ( ) round bracket, < > angle bracket
// : colon, ; semicolon, ` backtick , | pipe, & ampersand 
 

#include <stdio.h>   //หรือ "stdio.h"
#include "math.h"

//กำหนดค่าคงที่ คือ การสร้างตัวแทนเพื่อมาเก็บข้อมูลใดๆ โดยที่ไม่สามารถเผลี่ยนค่าข้อมูลนั้นได้
//และสามารถเอาตัวแทนที่สร้างมาใช้ในโปรแกรมได้
#define showline printf("----------------------------\n");
#define SMILE "^___^ 555"

int main(){
    showline
    printf("Iot-SAU\n");
    showline
    showline
    printf("%lf\n", pow(2, 10));
    printf("%s\n", SMILE);
    showline
    
    return 0;
}