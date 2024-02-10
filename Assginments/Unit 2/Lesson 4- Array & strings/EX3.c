// program to fine transpose of a matrix
#include <stdio.h>
int main(void){
    int x,y;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d",&x,&y);
    int matrix[x][y];
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is: \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
}