//07. Write a program to find the area of a triangle.
#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

Triangle input_triangle()
{
    Triangle t;
    printf("enter the base of tringle");
    scanf("%d",&t.base);
    printf("enter the altitude of triangle");
    scanf("%d",&t.altitude);
    return t;

}

void find_area(Triangle *t)
{
    (*t).area= 0.5* (*t).base* (*t).altitude;
}

void output(Triangle t)
{
    printf("Base: %.2f\n",t.base);
    printf("Altitude: %.2f\n",t.altitude);
    printf("Area: .2f\n",t.area);
}


int main()
{

}