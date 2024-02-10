// EX7:
// it is an interview trick

// Write Source Code to Swap Two Numbers without temp variable.
#include<stdio.h>
int main(void){
    float a,b;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping, value of a = %.2f",a);
    printf("\nAfter swapping, value of b = %.2f",b);
}