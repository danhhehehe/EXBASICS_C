#include<stdio.h>
// Viết chương trình kiểm tra số chẵn hay số lẻ
int main(){
    int a = 4;
    printf("a = %d\n", a);
    if(a % 2 == 0)// chia hết cho 2 là số chẵn ví sao dùng dấu % thay vì / để chia lấy dư 
                //ví dụ 4 chia 2 dư 0, 5 chia 2 dư 1
                //4|2
                //4|2
                //0
        printf("a = %d là số chẵn\n", a);
    else if(a % 2 != 0)
        printf("a = %d là số lẻ\n", a);
    return 0;
}