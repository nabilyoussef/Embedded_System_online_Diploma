
// EX3:

// Write C Program to Add Two Integers

// i should see the Console as following:
// ##########Console-output###
// Enter two integers: 12
// 11
// Sum: 23
// ###########################
#include<stdio.h>
int main(void){
    int x,y;
    printf("Enter two integers:");
    scanf("%d%d",&x,&y);
    printf("Sum: %d",x+y);
}