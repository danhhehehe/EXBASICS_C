//1. Given an integer N, sum up all its divisors. E.g.,
//sum of all divisors of N = 12 is 28
// #include <stdio.h>

// int main() {
//     int a = 12;
//     int sum = 0;
    
//     for (int i = 1; i <= a; i++) { 
//         if (a % i == 0) {
//             sum += i;  
//         }
//     }

//     printf("Tong cac uoc so cua %d la: %d\n", a, sum);
//     return 0;
// }

// 2. Given an integer N, e.g., N = 128
// • How many digits in N? E.g., 3
// • What is its last digit? E.g., 8
// • What is its first digit? E.g., 1
// • Compute the sum of all digits in N. E.g., sum = 11
// • Find the integer which is the reverse of N. E.g., 821

// #include<stdio.h>

// int main(){
//     int N = 128;
//     // int digits = 0;
//     // while(N !=0) {
//     //         N = N / 10;
//     //         digits++;
//     // }
//     //  printf("Tổng số của N: %d\n", digits);



//     int temp;
//         for (int i = 1; N != 0; i++) {
//             N = N / 10;
//             temp = i;
//             printf("Lần %d: N = %d\n", temp, N);
//         }
//         printf("Tổng số của N: %d\n", temp);
//         return 0;


// }


// /• What is its last digit? E.g., 8

// #include<stdio.h>

// int main(){
//     int lastdigits;
//     int N = 128;
//     for(int i = 1; i < N; i++){
//         if(N != 0){
//         lastdigits = N % 10;
//         }
//     }
//     printf("Chữ số cuối cùng của dãy số N là: %d", lastdigits);
//     return 0;
// }


// • What is its mid digit? E.g., 2

    // #include<stdio.h>

    // int main(){
    //     int N = 128;
    //     int middigits;


    //     for(int i = 1; i < N; i++){
    //         if(N > 0){
    //         int digits = N / 10;
    //             middigits = digits %10;
    //         }
    //     }
    //     printf("Số ở giữa của số N là: %d", middigits);
    //     return 0;
    // }

// • What is its first digit? E.g., 1

    // #include<stdio.h>

    // int main(){
    //     int N = 128;
    //     int firstdigits;


    //     for(int i = 1; i < N; i++){
    //        if(N > 0){
    //         N = N / 10;
    //         int n = N % 10;
    //         firstdigits = N;
    //         printf("Lần %d: N = %d\n", i, N);
    //        }
    //     }
    //     printf("Số đầu tiên của số N là: %d", firstdigits);
    //     return 0;
    // }

// • Compute the sum of all digits in N. E.g., sum = 11

// #include <stdio.h>

// int main() {
//     int N = 128;
//     int sum = 0;   // Khởi tạo sum = 0

//     for (; N != 0; N = N / 10) {
//         sum += N % 10;   // Cộng chữ số cuối
//     }

//     printf("Tổng các chữ số của N: %d\n", sum);
//     return 0;
// }

// • Find the integer which is the reverse of N. E.g., 821

// #include<stdio.h>

// int main(){
//     int rev;
//     int N = 128;
    
//     while(N !=0){
//         int digit = N % 10; 
//         rev = rev * 10 + digit;
//         N = N / 10;
//     }

//     printf("Chuổi đảo ngược của số N: %d", rev);
//     return 0;
// }


//3. Check if a given integer N is a prime number.

// #include <stdio.h>

// int main() {
//     int N, i;
//     int isPrime = 1;  // isPrime = 1 nghĩa là giả sử N là số nguyên tố

//     printf("Nhap so nguyen N: ");
//     scanf("%d", &N);

//     if (N <= 1) {
//         isPrime = 0;
//     } else {
//         for (i = 2; i * i <= N; i++) {
//             if (N % i == 0) {
//                 isPrime = 0; 
//             }
//         }
//     }

//     if (isPrime)
//         printf("%d la so nguyen to.\n", N);
//     else
//         printf("%d khong phai so nguyen to.\n", N);

//     return 0;
// }

// 4. Given integer n, compute:
// a. S = 1^2 + 2^2 + ⋯ + n^2

// #include<stdio.h>

// int main(){
//     int N = 3;
//     int s;

//     for(int i = 1; i <= N; i++){
//         s += i * i;
//         printf("Tổng số %d mũ 2 = %d \n", N, s);
//     }
//     return 0;
// }

//b.

// #include<stdio.h>

// int main(){
//     int N;
//     float s;

//     printf("Nhập N:");
//     scanf("%d", &N);

//         for(int i = 1; i <= N; i++){
//                 s += 1.0 / i;
//                 printf("Tổng số 1/%d phân = %f \n", i, s);
//             }
//         printf("Tổng S = %.6f\n", s);
//         return 0;
// }

//c.
// #include<stdio.h>
// int main(){
//     int N;
//     float s = 0;
//     // float phanso;
//     printf("Nhập N:");
//     scanf("%d", &N);

//         for(float i = 1; i <= N; i++){
//                 // phanso = (float)i / (i + 1);
//                 s += i / (i + 1);
//                 printf("Tổng số %f/%f phân\n", i,  i + 1);
//             }
//         printf("Tổng S = %.6f\n", s);
//         return 0;
// }

//d. 
// #include<stdio.h>
// int main(){
//     int N;
//     int T = 1;
//     printf("Nhập N:");
//     scanf("%d", &N);

//         for(int i = 1; i <= N; i++){
//                 T *= i;
//                 printf("%d * %d = %d \n", i, N, T);
//             }
//         printf("Tổng T = %d\n", T);
//         return 0;
// }

//e. 
// #include<stdio.h>
// int main(){
//     int N;
//     float T = 1;
//     float TGT = 1;
//     printf("Nhập N:");
//     scanf("%d", &N);

//         for(float i = 1; i <= N; i++){
//                 TGT *= i;
//                 T += TGT;
//                  printf("%.0f! = %.0f, Tổng hiện tại = %.0f\n", i, TGT, T);
//             }
//         printf("Tổng T = %.0f\n", T);
//         return 0;
// }