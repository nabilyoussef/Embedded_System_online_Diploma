#include <stdio.h>
int main(void)
{
    int arr1[2][2];
    int arr2[2][2];
    int sum[2][2];

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <2; j++)
        {
            printf("\nfor array 1, Enter array1[%d][%d]:", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    i = 0;
    j = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nfor array 2, Enter array1[%d][%d]:", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }

    // sum
    i=0;
    j=0;
        for ( i = 0; i <= 2 ; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    printf("\n the Sum of matrix");
    printf("\n %d\t%d",sum[0][0],sum[0][1]);
    printf("\n %d\t%d",sum[1][0],sum[1][1]);
}
