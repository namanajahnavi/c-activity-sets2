//05.  Write a program to find GCD _(HCF)_ of two numbers.
# include <stdio.h>
int input()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
    
}
void output(int a, int b, int gcd)
{
    printf("Gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
    int a = input();
    int b = input();
    int gcd= find_gcd( a,  b);
    output(a,b,gcd);
    return 0;
}