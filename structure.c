#include <stdio.h>
struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"Rahul", 20};

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    return 0;
}
