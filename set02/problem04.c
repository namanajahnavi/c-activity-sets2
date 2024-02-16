//04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>

int input_array_size()
{
    int n;
    printf("enter the size of the array");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    printf("\nEnter %d integers: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int sum_composite_numbers(int n, int a[n])
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)    
    {
        if (a[i] == 0) continue;
        else if (a[i] > 1 && a[i] % 2 != 0)   /*checking prime number condition*/
            if (a[i] % i == 0)               /*checking divisibility from 1 to i */
                sum += a[i];                 /*if yes then add it to sum*/
    }
    return sum;
}
void output(int sum)
{
    printf("\nSum of Composite Numbers is :%d\n", sum);
}
int main()
{
    int size = input_array_size();
    int array[size];
    input_array(size, array);
    int sum = sum_composite_numbers(size, array);
    output(sum);
    return 0;
}