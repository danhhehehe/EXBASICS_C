#include<stdio.h>
#include<math.h>
// Viết chương trình giải phương trình bậc hai ax^2 + bx + c = 0
int main(){
    float a = 1, b = -1, c = 3;
    float x;
    printf("Phương trình: %dx^2 + %dx + %d = 0\n", a, b, c);
    if(a + b + c == 0){
        float x1 = 1;
        float x2 = c/a;
    printf("Phương trình có 2 nghiệm phân biệt x1 = %f, x2 = %f\n", x1, x2);

    }else if(a - b + c == 0){
            float x1 = -1;
            float x2 = -c/a;
    printf("Phương trình có 2 nghiệm phân biệt x1 = %f, x2 = %f\n", x1, x2);
            return 0;
        }
        x = b*b - 4*a*c;
        if(x < 0){
            printf("Phương trình vô nghiệm\n");
        }else if(x == 0){
            float x = -b/(2*a);
    printf("Phương trình có nghiệm kép x1 = %f\n", x);

            }else if(x > 0){
                float x1 = (((-b + sqrt(x)) / (2 * a)));
                float x2 = (((-b - sqrt(x)) / (2 * a)));
    printf("Phương trình có hai nghiệm phân biệt x1 = %f, x2 = %f", x1, x2);
        }
        return 0;
    }

    
