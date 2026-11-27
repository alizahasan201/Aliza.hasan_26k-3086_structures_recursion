#include <stdio.h>

void showEven(int arr[], int i, int n) {
    if (i == n)   
        return;
    if (arr[i] % 2 == 0)
        printf("%d ", arr[i]);
    showEven(arr, i + 1, n);
}

int main() {
    int arr[10];
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers are: ");
    showEven(arr, 0, 10);
    printf("\n");

    return 0;
}
