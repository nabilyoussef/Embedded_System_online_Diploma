#include <stdio.h>
 struct student
 {
        char name[100];
        char roll[100];
        int marks;  
 };


 int main(int argc, char const *argv[])
 {
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", s[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%s", s[i].roll);
        printf("Enter the marks of the student: ");
        scanf("%d", &s[i].marks);
    }
    for(i=0;i<10;i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %s\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
    }
    
    return 0;
 }
 
 