#include <stdio.h>
int main(void)
{
    int One, Two;
    printf(" Enter 1st: ");
    scanf("%d",&One);
    printf("\nEnter 2nd: ");
    scanf("%d",&Two);
    // assume one = 5 . Two =10
    One = One + Two;  // 15
    Two = One - Two; // 5
    One = One - Two; // 10
    /*==================*/
    printf("\n the first : %d ", One );
    printf("\n the second : %d", Two );
}
