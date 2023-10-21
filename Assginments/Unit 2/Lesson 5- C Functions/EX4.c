#include <stdio.h>
int Power_calc(int a, int b);
int main() {
    int base, power;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number: ");
    scanf("%d",&power);
    int result = Power_calc(base,power);
    printf (" %d power %d = %d", base, power, result);
    return 0;
}

int Power_calc(int a, int b){
    if (b != 0)
        return (a*Power_calc(a,b-1));   
    else 
        return 1;
}
