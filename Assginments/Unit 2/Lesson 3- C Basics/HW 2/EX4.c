#include    <stdio.h>
int main(void){

float a;
printf("Enter a number:");
scanf("%f",&a);
if (a>0)
{
    printf("The number is positive");
}
else if (a<0)
{
    printf("The number is negative");
}
else
{
    printf("The number is zero");

}
}