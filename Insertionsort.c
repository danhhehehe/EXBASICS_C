#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j;

        // for lùi dần từ i-1 về 0
        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];   // dịch sang phải
            printf("%d lớn %d\n", arr[j], key);
        }
        arr[j + 1] = key; // chèn key vào vị trí đúng
    }
    printf("Mảng sau khi sắp xếp:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
