#include <stdio.h>

struct Room {
    int roomNo;
    char type[20];
    int occupants;
    float rent;
};

int main() {
    struct Room r[5];
    int i;
    float total = 0;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of room %d\n", i + 1);
        printf("Room number: ");
        scanf("%d", &r[i].roomNo);
        printf("Room type: ");
        scanf("%s", r[i].type);
        printf("Number of occupants: ");
        scanf("%d", &r[i].occupants);
        printf("Daily rent: ");
        scanf("%f", &r[i].rent);
    }

    printf("\n--- Room Records ---\n");
    for (i = 0; i < 5; i++) {
        printf("Room %d: Type = %s, Occupants = %d, Rent = %.2f\n",
               r[i].roomNo, r[i].type, r[i].occupants, r[i].rent);
        total = total + r[i].rent;
    }

    printf("\nTotal daily rent of all rooms = %.2f\n", total);

    return 0;
}
