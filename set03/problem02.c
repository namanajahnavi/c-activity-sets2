//2. Write a program to find whether the given 3 points form a triangle
#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the value of x1\n");
    scanf("%f",&*x1);
    printf("enter the value of y1\n");
    scanf("%f",&*y1);
    printf("enter the value of x2\n");
    scanf("%f",&*x2);
    printf("enter the value of y2\n");
    scanf("%f",&*y2);
    printf("enter the value of x3\n");
    scanf("%f",&*x3);
    printf("enter the value of y3\n");
    scanf("%f",&*y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    return(sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return(sqrt(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    return(sqrt(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
   if()
}
int main() {
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    output(x1, y1, x2, y2, x3, y3, );
    return 0;
}