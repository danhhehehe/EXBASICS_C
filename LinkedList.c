#include <stdio.h>
#include <stdlib.h>

// Định nghĩa struct Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    // Cấp phát bộ nhớ cho một Node mới
    Node* newnode = (Node*)malloc(sizeof(Node));

    if (newnode == NULL) {
        printf("Không đủ bộ nhớ!\n");
        return 1;
    }

    newnode->data = 10;   // Gán giá trị cho node
    newnode->next = NULL; // Liên kết tiếp theo = NULL

    printf("Node data = %d\n", newnode->data);

    free(newnode); // Giải phóng bộ nhớ
    return 0;
}
