// EX6:

// Write Source Code to Swap Two Numbers

// #########Console_output######
// Enter value of a: 1.20
// Enter value of b: 2.45

// After swapping, value of a = 2.45
// After swapping, value of b = 1.2
// #############################
#include<stdio.h>
int main(void){
    float a,b,temp;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping, value of a = %.2f",a);
    printf("\nAfter swapping, value of b = %.2f",b);
}