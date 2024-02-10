#include        <stdio.h>
int main()
{
    float arr1[100] ;
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);
    int i;
    float sum;
    for ( i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%f", &arr1[i]);
        sum += arr1[i];
    }
    printf("The Averege of the elements is: %.2f", sum/n);


}
