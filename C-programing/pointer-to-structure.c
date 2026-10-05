#include<stdio.h>
#include<string.h>// this header file is used for string manipulation functions

struct Student {
    int id;
    char name[50];
    float score;
};

int main() {
    struct Student s1 = {1, "Alice", 85.5};// Initialize a Student structure
    struct Student *ptr = &s1;// Create a pointer to the Student structure

    printf("ID: %d\n", ptr->id);// Accessing structure members using pointer
    printf("Name: %s\n", ptr->name);
    printf("Score: %.2f\n", ptr->score);

    return 0;
}