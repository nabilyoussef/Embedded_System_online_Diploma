#include <stdio.h>
int main(void)
{
    int arr1[10] = {1, 2, 3, 4, 5};
    int x, y;
    printf("Enter element to be inserted: ");
    scanf("%d", &x);
    printf("\nEnter the location: ");
    scanf("%d", &y);
    int i;
    for (i = 5; i >= y; i--){
        arr1[i]=arr1[i-1];
    }
    arr1[y-1]=x;
    i=0;
    printf("\n");
    for ( i = 0; i <6; i++)
    {
        printf("%d\t",arr1[i]);
    }
    
}
