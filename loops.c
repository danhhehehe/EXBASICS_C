// Write a program in C to display the first 10 natural numbers.

// #include<stdio.h>

// int display_first_10_natural_numbers(int n, int i) {
//     for(i = 1; i <= n; i++){
//         printf("%d\n", i);
//     }

// }
// int main () {
//     int n = 10; int i;
//     display_first_10_natural_numbers(n, i);
//     return 0;
// }

// 2. Write a program in C to display N terms of natural numbers and their sum.

// #include<stdio.h>

// int display_n_terms_of_natural_numbers_and_their_sum(int n, int i) {
//     int sum = 0;
//     for(i = 1; i <= n; i++){
//         printf("%d\n", i);
//         sum += i;
//     }
//     printf("Sum = %d\n", sum);
// }

// int main (){
//     int n = 7; int i;
//     display_n_terms_of_natural_numbers_and_their_sum(n, i);
//     return 0;
// }


// 3. Write a program in C to read 10 numbers from keyboard and find their sum
// and average.

// #include<stdio.h>

// float average(int n, int i){
// int sum = 0;
// for(i = 1; i <= n; i++){
//     int number;
//     printf("Enter number %d: ", i);
//     scanf("%d", &number);
//     sum += number;  
// }
// return (float)sum / n;
// }

// int main (){
//     int n = 2; int i;
//     float avg = average(n, i);
//     printf("Average = %.2f\n", avg);
//     return 0;
// }


// 4. Write a program in C to display the cube of the number upto a given integer.

// #include<stdio.h>

// long long cube_of_number(int n, int i){
//     long long cube;
//     for(i = 1; i <= n; i++){
//         cube = (i * i * i);
//         printf("Cube of %d is: %lld\n", i, cube);
//     }
//     return cube;
// }

// int main(){
//     int n = 5; int i;
//     cube_of_number(n, i);
//     return 0;
// }


// 5. Write a program in C to display the N terms of odd natural numbers and their
// sum.

// #include<stdio.h>

// int odd_natural_numbers(int i, int n, int sum){
//     for(i =1; i <= n; i++){
//         if(i % 2 != 0){
//             printf("%d\n", i);
//             sum += i;
//         }
//     }
//     printf("Sum = %d\n", sum);
// }
// int main(){
//     int n = 10; int i; int sum = 0;
//     odd_natural_numbers(i, n, sum);
//     return 0;

// }


// 6. Write a program in C to display the N terms of even natural numbers and their
// sum.

// #include<stdio.h>

// int even_number (int i, int n, int sum){
//     for(i = 1; i <= n; i++){
//         if(i % 2 == 0){
//             printf("%d\n", i);
//             sum += i;
//         }
//     }
//     printf("Sum = %d\n", sum);
// }

// int main(){
//     int n =10; int i; int sum = 0;
//     even_number(i, n, sum);
//     return 0;
// }

// 7. Write a program in C to display the pattern like right angle triangle using an
// asterisk.
// The pattern like:
// *
// **
// ***
// ****


// #include<stdio.h>

// int pattern_like(int n, int i, int j){
//     for(int i = 1;i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n = 4; int i; int j;
//     pattern_like(n, i, j);
//     return 0;
// }

// 8. Write a program in C to display the pattern like right angle triangle with a
// number.

// #include<stdio.h>

// int pattern_like(int n, int i, int j){
//     for(int i = 1;i <= n; i++){
//         for(int j = 1; j <= i; j++){   
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n = 4; int i; int j;
//     pattern_like(n, i, j);
//     return 0;
// }

// 9. Write a program in C to make such a pattern like right angle triangle with a
// number which will repeat a number in a row.

// #include<stdio.h>

// int pattern_like(int n, int i, int j){
//     for(int i = 1;i <= n; i++){
//         for(int j = 1; j <= i; j++){   
//             printf("%d", i);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n = 4; int i; int j;
//     pattern_like(n, i, j);
//     return 0;
// }

// 10.Write a program in C to make such a pattern like right angle triangle with
// number increased by 1.


// #include<stdio.h>

// int pattern_like(int n, int i, int j, int number){
//     for(int i = 1;i <= n; i++){
//         for(int j = 1; j<= i; j++){
//             printf(" ");
//             printf("%d", number);
//             number ++;
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n = 4; int i; int j; int number = 1;
//     pattern_like(n, i, j, number);
//     return 0;
// }

// 11.Write a C program to calculate the factorial of a given number N.


// #include<stdio.h>

// long long factorial (int n, int i, long long fact){
//     fact = 1;
//     for(i =1; i <= n; i++){
//         fact *= i; 
//         printf("%lld\n", fact);
//     }
//     return fact;
// }

// int main(){
//     int n = 5; int i; long long fact;
//     fact = factorial(n, i, fact);
//     printf("Factorial of %d is: %lld\n", n, fact);
//     return 0;
// }


// 12.Write a program in C to find the sum of the series:
// #include <stdio.h>
// #include <math.h>
// float cos_series(float x, int n) {
//     float sum = 1.0;  
//     float term = 1.0;     
    
//     for (int i = 1; i < n; i++) {
//         term = -term * x * x / ((2 * i - 1) * (2 * i));
//         sum += term;
//     }
//     return sum;
// }

// int main() {
//     double x;
//     int n;

//     printf("Input the Value of x: ");
//     scanf("%lf", &x);
//     printf("Input the number of terms: ");
//     scanf("%d", &n);

//     double result = cos_series(x, n);

//     printf("the sum = %lf\n", result);
//     printf("Number of terms = %d\n", n);
//     printf("value of x = %lf\n", x);

//     return 0;
// }

// 13.Write a program in C to display the N terms of harmonic series and their sum.
// #include <stdio.h>

// float tinhtongsotapphan(int n) {
//     float sum = 0.0;
//     for (int i = 1; i <= n; i++) {
//         sum += 1.0 / i;
//         if(i < n)
//         printf("1/%d + ", i);
//         else
//         printf("1/%d", i);
//     }

//     return sum;
// }

// int main() {
//     int n = 5;
//     float sum = tinhtongsotapphan(n);
//     printf("\nSum = %.2f\n", sum);
//     return 0;
// }

// 14.Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
// #include<stdio.h>
// void display_series_sum(int n) {
//   int sum = 0;
//   int temp = 0;
//   for(int i =1; i <= n; i++) {
//     temp = temp * 10 + 9;
//     sum += temp;
//   }
//   printf("Sum = %d\n", sum);    
// }

// int main (){
//     int n = 5;
//     display_series_sum(n);
//     return 0;
// }


//15.Write a program in C to display the sum of the series.

// #include <stdio.h>

// float exp_series(float x, int n) {
//     float sum = 1.0;   // số hạng đầu tiên = 1
//     float term = 1.0;  // dùng để nhân dồn

//     for (int i = 1; i < n; i++) {
//         term *= x / i;   // term_i = term_(i-1) * (x / i)
//         sum += term;
//     }
//     return sum;
// }

// int main() {
//     float x;
//     int n;

//     printf("Input the value of x: ");
//     scanf("%f", &x);
//     printf("Input number of terms: ");
//     scanf("%d", &n);

//     float result = exp_series(x, n);
//     printf("The sum is: %f\n", result);

//     return 0;
// }

// 16.Write a program in C to find the sum of the series
// #include <stdio.h>
// #include <math.h>

// // Hàm tính số hạng thứ i
// int term_value(int x, int i) {
//     int power = 2 * i - 1;    // số mũ: 1, 3, 5, 7, ...
//     int term = pow(x, power);

//     // nếu i chẵn thì đổi dấu
//     if (i % 2 == 0) {
//         term = -term;
//     }
//     return term;
// }

// // Hàm tính tổng chuỗi
// int ser_sum(int x, int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         int term = term_value(x, i);
//         printf("%d\n", term);
//         sum += term;
//     }
//     return sum;
// }

// int main() {
//     int x, n;

//     printf("Input the value of x: ");
//     scanf("%d", &x);
//     printf("Input number of terms: ");
//     scanf("%d", &n);

//     printf("The values of the series:\n");
//     int result = ser_sum(x, n);

//     printf("Number of terms = %d\n", n);
//     printf("Value of x = %d\n", x);
//     printf("The sum = %d\n", result);

//     return 0;
// }


