#include<stdio.h>




void hoandoi(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                hoandoi(&arr[j], &arr[j - 1]);
            }
        }
    }
}

int main () {
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    insertsort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
