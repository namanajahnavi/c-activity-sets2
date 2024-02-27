//1. Write a program to find the distance between 2 points
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("enter the value of x1\n");
    scanf("%f",x1);
    printf("enter the value of y1\n");
    scanf("%f",y1);
    printf("enter the value of x2\n");
    scanf("%f",x2);
    printf("enter the value of y2\n");
    scanf("%f",y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    return(sqrt(pow(x2-x1,2) + pow(y2-y1,2)));
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between point (%.2f,%.2f) and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,distance);
}

int main()
{
    float x1,y1,x2,y2,distance ;
    input(&x1,&y1,&x2,&y2);
    distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}