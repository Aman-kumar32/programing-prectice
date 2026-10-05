// Typedef in C
#include <stdio.h>

typedef int Number;// Typedef is a keyword in C that allows you to create an alias for a data type. It can be used to simplify complex data types or to create more meaningful names for existing types. In this example, we define a new type called Number that is an alias for the int data type. We also define a struct called Student that contains an integer id and a character array name.
typedef struct {// A struct is a user-defined data type in C that allows you to group different types of variables together. In this example, we define a struct called Student that contains an integer id and a character array name.
    int id;
    char name[50];
} Student;

int main() {
    Number n = 10;
    Student s = {1, "Alice"};

    printf("Number: %d\n", n);
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);

    return 0;
}