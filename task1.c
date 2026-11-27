#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    float fee;
};

int main() {
    struct Patient p;

    printf("Enter patient ID: ");
    scanf("%d", &p.id);
    printf("Enter patient name: ");
    scanf(" %[^\n]", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter consultation fee: ");
    scanf("%f", &p.fee);

    printf("\n--- Patient Details ---\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Fee: %.2f\n", p.fee);

    return 0;
}
