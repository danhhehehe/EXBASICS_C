#include <stdio.h>

// Hàm hoán đổi 2 số
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm partition: chia mảng dựa trên pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // chọn phần tử cuối làm pivot
    int i = (low - 1);      // chỉ số của phần tử nhỏ hơn pivot

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {  // nếu nhỏ hơn hoặc bằng pivot
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1); // vị trí pivot sau khi phân hoạch
}

// Hàm Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Tìm vị trí phân hoạch
        int pi = partition(arr, low, high);

        // Sắp xếp 2 mảng con
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Hàm main để chạy thử
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
