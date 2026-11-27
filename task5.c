#include <stdio.h>

struct Department {
    int deptId;
    char deptName[50];
    int students;


    struct Head {
        int empId;
        char name[50];
        char designation[30];
    } h;
};

int main() {
    struct Department d;

    printf("Enter department ID: ");
    scanf("%d", &d.deptId);
    printf("Enter department name: ");
    scanf(" %[^\n]", d.deptName);
    printf("Enter number of students: ");
    scanf("%d", &d.students);

    printf("Enter head employee ID: ");
    scanf("%d", &d.h.empId);
    printf("Enter head name: ");
    scanf(" %[^\n]", d.h.name);
    printf("Enter head designation: ");
    scanf(" %[^\n]", d.h.designation);

    printf("\n--- Department Details ---\n");
    printf("Department ID: %d\n", d.deptId);
    printf("Department Name: %s\n", d.deptName);
    printf("Enrolled Students: %d\n", d.students);
    printf("\n--- Head Details ---\n");
    printf("Employee ID: %d\n", d.h.empId);
    printf("Name: %s\n", d.h.name);
    printf("Designation: %s\n", d.h.designation);

    return 0;
}
