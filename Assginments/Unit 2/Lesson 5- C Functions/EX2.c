#include <stdio.h>
int factorial(int a);
int main() {
    printf("Enter an positive integer : ");
    int x;
    scanf("%d",&x);
    int result;
    result = factorial(x);
    printf(" Factorial of %d : %d",x,result);
    return 0;
}

int factorial(int a){
    if (a != 1){
        return a*factorial(a-1);
    }
    
}