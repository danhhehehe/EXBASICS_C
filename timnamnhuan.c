#include<stdio.h>
// Viết chương trình kiểm tra năm nhuận
int main(){
    int yob = 2025;
    printf("Năm sinh: %d\n", yob);
    if(yob % 4 == 0 && //kiểm tra chia hết cho 4 
        (yob % 400 == 0 || yob % 100 != 0))// kiểm tra chia hết cho 400 hoặc không chia hết cho 100
        printf("Năm %d là năm nhuận\n", yob);
    else
        printf("Năm %d không phải là năm nhuận\n", yob);
        return 0;

}