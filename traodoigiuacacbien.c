#include<stdio.h>
// Viết chương trình trao đổi giá trị của 3 biến max, min, mid theo thứ tự max -> min, min -> mid, mid -> max

int main(){
    int max , min, mid;
    printf("Nhập max: ");
    scanf("%d", &max);
    printf("Nhập min: ");
    scanf("%d", &min);
    printf("Nhập mid: ");
    scanf("%d", &mid);
    printf("max = %d, min = %d, mid = %d\n", max, min, mid);

    int temp;// biến tạm để trao đổi giá trị
    temp = max;// lưu giá trị max vào biến tạm
    max = min;// gán giá trị min cho max
    min = mid;// gán giá trị mid cho min
    mid = temp;// gán giá trị biến tạm cho mid

    printf("max = %d, min = %d, mid = %d\n", max, min, mid);
    return 0 ;
}
