#include<stdio.h>
// Viết chương trình kiểm tra số âm hay số dương
int main(){
    int a = 5;
    printf("a = %d\n", a);
    if(a >= 0)
    printf("a = %d là số dương\n", a);
    else if (a < 0)
    printf("a = %d là số âm\n", a);
}