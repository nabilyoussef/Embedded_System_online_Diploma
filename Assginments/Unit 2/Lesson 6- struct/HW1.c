#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    char roll[100];
    int marks;
};

int main() {
    struct student s;
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Enter the roll number of the student: ");
    scanf("%s", s.roll);
    printf("Enter the marks of the student: ");
    scanf("%d", &s.marks);
    printf("Name: %s\n", s.name);
    printf("Roll: %s\n", s.roll);
    printf("Marks: %d\n", s.marks);

    return 0;
}
