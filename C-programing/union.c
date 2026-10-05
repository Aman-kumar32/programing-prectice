// Union in C
#include <stdio.h>
#include <string.h>

union Data { // A union is a special data type that allows storing different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time. Unions provide an efficient way of using the same memory location for multiple purposes.
    int roll;
    float marks;
    char name[20];
};

int main() {
    union Data d; // Create a union variable

    d.roll = 10;
    printf("Roll number: %d\n", d.roll);

    d.marks = 3.14;
    printf("Marks: %.2f\n", d.marks);

    strcpy(d.name, "Hello");// Assign a string to the character array member of the union
    printf("Character string value: %s\n", d.name);

    return 0;
}