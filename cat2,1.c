#include <stdio.h>
#include <string.h>

// Define the employee structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    struct employee emp1 = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Print the employee information (optional)
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Department: %s\n", emp1.department);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Email: %s\n", emp1.email);

    return 0;
}