#include <stdio.h>

int main(){

    //คำสั่ง printf( ) แสดงข้อมูลที่อยู่ใน "" แรกเท่านั้นทางหน้าจอ
    //แต่หากมีอะไรที่อยู่นอกเหนือจาก "" แรก 
    //ข้อมูลเหล่านั้นจะต้องถูกนำมาแสดงที่ "" แรกด้วย Fomat Spec./Format Code เสมอ
    printf("AAA...%d ---- %s ^___^ %d\n", 111, "wow wow wow", 10 + 20);


    printf("AAA\nBBB\n\n\nCCC\tDDD\t\tCCC");    


    return 0;
}