// 1. Given two integers a and b, find the larger
// number.

// #include<stdio.h>


// void large_number(int a, int b){
//     if(a > b)
//     printf("%d is Larger", a);
//     else
//     printf("%d is Larger", b);
// }

// int main(){
//     int a, b;
//     printf("Enter two numbers:\n");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     large_number(a, b);
//     return 0;
// }


// 2. Solve quadratic equation y = ax^2 + bx + c

// #include <stdio.h>
// #include <math.h>

// void quadratic_equation(float a, float b, float c) {
//     // Kiểm tra hệ số a có bằng 0 không (không phải phương trình bậc 2)
//     if (a == 0) {
//         if (b == 0) {
//             if (c == 0) {
//                 printf("Phương trình có vô số nghiệm\n");
//             } else {
//                 printf("Phương trình vô nghiệm\n");
//             }
//         } else {
//             float x = -c / b;
//             printf("Phương trình có một nghiệm x = %f\n", x);
//         }
//         return;
//     }

//     // // Kiểm tra các trường hợp đặc biệt
//     // if (a + b + c == 0) {
//     //     float x1 = 1;
//     //     float x2 = c / a;
//     //     printf("Phương trình có 2 nghiệm phân biệt x1 = %f, x2 = %f\n", x1, x2);
//     //     return;
//     // } else if (a - b + c == 0) {
//     //     float x1 = -1;
//     //     float x2 = -c / a;
//     //     printf("Phương trình có 2 nghiệm phân biệt x1 = %f, x2 = %f\n", x1, x2);
//     //     return;
//     // }

//     float d = b*b - 4*a*c;
//     if (d < 0) {
//         printf("Phương trình vô nghiệm\n");
//     } else if (d == 0) {
//         float x = -b / (2*a);
//         printf("Phương trình có nghiệm kép x = %f\n", x);
//     } else {
//         float x1 = (-b + sqrt(d)) / (2*a);
//         float x2 = (-b - sqrt(d)) / (2*a);
//         printf("Phương trình có hai nghiệm phân biệt x1 = %f, x2 = %f\n", x1, x2);
//     }
// }

// int main() {
//     float a, b, c;
//     printf("Enter a, b, c:\n");
//     scanf("%f %f %f", &a, &b, &c);
//     quadratic_equation(a, b, c);
//     return 0;
// }


// 3. Compute the sum of N first integers S = 1 + 2 +
// ⋯ + N

// #include<stdio.h>

// void sum_of_integers(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     printf("Sum of first %d integers is: %d\n", n, sum);
// }

// int main (){
//     int n;
//     printf("Enter a positive integer N:\n");
//     scanf("%d", &n);
//     sum_of_integers(n);
//     return 0;
// }
