// Nested Structures in C
#include <stdio.h>
#include <string.h>

struct Address {
    char street[100];
    char city[50];
    char state[30];
    int zipCode;
};

struct Employee {
    char name[100];
    int age;
    struct Address addr;
};

int main() {
    struct Employee emp;

    strcpy(emp.name, "John Doe");
    emp.age = 30;
    strcpy(emp.addr.street, "123 Main St");
    strcpy(emp.addr.city, "Anytown");
    strcpy(emp.addr.state, "CA");
    emp.addr.zipCode = 12345;

    printf("Employee Name: %s\n", emp.name);
    printf("Employee Age: %d\n", emp.age);
    printf("Address: %s, %s, %s %d\n", emp.addr.street, emp.addr.city, emp.addr.state, emp.addr.zipCode);

    return 0;
}