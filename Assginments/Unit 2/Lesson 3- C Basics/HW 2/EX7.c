    #include<stdio.h>
    int main(void)
    {
        int x;
        int i;
        unsigned long result = 1;
        printf(" Enter an Integer: ");
        scanf("%d",&x);
        if ( x<0){
            printf("\nError!!! Farorial of negative number \
            doesn't exist");
        }
        else 
        {
            for ( i = 1; i <= x; ++i)
            {
                result *= i;
            }
            printf(" Factorial = %lu", result);
        }
        
    }
