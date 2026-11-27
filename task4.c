#include <stdio.h>

struct Owner {
    int ownerId;
    char ownerName[50];
    char contact[20];
};

struct Vehicle {
    char regNo[20];
    char model[30];
    int year;
    struct Owner o;  
};

int main() {
    struct Vehicle v;
    struct Vehicle *ptr;

    ptr = &v;  

    printf("Enter registration number: ");
    scanf("%s", ptr->regNo);
    printf("Enter vehicle model: ");
    scanf(" %[^\n]", ptr->model);
    printf("Enter manufacturing year: ");
    scanf("%d", &ptr->year);

    printf("Enter owner ID: ");
    scanf("%d", &ptr->o.ownerId);
    printf("Enter owner name: ");
    scanf(" %[^\n]", ptr->o.ownerName);
    printf("Enter contact number: ");
    scanf("%s", ptr->o.contact);

    printf("\n--- Vehicle Information ---\n");
    printf("Registration No: %s\n", ptr->regNo);
    printf("Model: %s\n", ptr->model);
    printf("Year: %d\n", ptr->year);
    printf("\n--- Owner Information ---\n");
    printf("Owner ID: %d\n", ptr->o.ownerId);
    printf("Owner Name: %s\n", ptr->o.ownerName);
    printf("Contact: %s\n", ptr->o.contact);

    return 0;
}
