#include <stdio.h>

int calculateSum(int n) {
    if (n == 1)
        return 1;
    return n + calculateSum(n - 1);
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Sum = %d\n", calculateSum(n));

    return 0;
}
