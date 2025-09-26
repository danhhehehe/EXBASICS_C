#include<stdio.h>
// Viết chương trình tìm số lớn nhất trong 3 số a, b, c
int main(){
    int a = 5, b =10, c = 15;
  
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    if(a > b && a > c)
        printf("a = %d là số lớn nhất\n", a);
    else if( b > c && b > a )
    printf("b = %d là số lớn nhất\n", b);
    else
    printf("c = %d là số lớn nhất\n", c);

    return 0;
}