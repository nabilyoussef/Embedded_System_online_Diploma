#include<stdio.h>

int prime_check(int a);
int main(){
        printf("Enter Two numbers (intervals):");
    int x,y;
    scanf("%d",&x);
    printf("\n");
    scanf("%d",&y);
    printf("Prime numbers are ");
    int i;
    int flag;
    for ( i = x; i <=y; i++)
    {
        flag = prime_check(i);
        if (flag == 0){
            printf("%d\t",i);
        }
    }
    return 0;
    }

    int prime_check(int a){
    int flag = 0;
    int j;
    for(j=2; j<= a/5 ; ++j){
        if (a%j==0){
            flag = 1;
            break;
        }
    }
    return flag;
}