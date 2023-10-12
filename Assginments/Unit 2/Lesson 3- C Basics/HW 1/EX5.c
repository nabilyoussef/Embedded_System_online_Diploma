/*
EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################
*/
#include<stdio.h>
int main(void){
    char x;
    int y;
    printf("Enter a character:");
    scanf("%c",&x);
    y=x ;
    printf("\nASCII value of %c = %d",x,y);
}