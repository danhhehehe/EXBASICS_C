#include<stdio.h>
// Viết chương trình so sánh 2 số a và b
int main(){

    // int a = 5;
    // int b = 10;
    int a, b;
    printf("Nhập a: ");
    scanf("%d", &a);
    printf("Nhập b: ");
    scanf("%d", &b);

    printf("%d và %d\n", a, b);

    if(a > b)
        printf("a = %d Lớn hơn b = %d\n", a, b);
    else
        printf("a = %d Nhỏ hơn b = %d\n", a, b);
    
    return 0;
}