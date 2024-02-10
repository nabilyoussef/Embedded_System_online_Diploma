#include <stdio.h>
int main(void){
    int a,b,c;
    printf("Enter value of a,b&c:");
    scanf("%d%d%d",&a,&b,&c);
    int temp=a;
    if (temp<b)
    {
        temp=b;
    }
    if (temp<c)
    {
        temp=c;
    }
    printf("The largest number is %d",temp);
  
}