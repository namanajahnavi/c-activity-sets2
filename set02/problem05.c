#include <stdio.h>
int main()
{
    int x,y,sum;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
    sum=x+y;
    printf(" The sum of %d and %d is %d",x,y,sum);
    return sum;
}