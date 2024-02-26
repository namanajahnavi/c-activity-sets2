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
    printf("The area of triangle wwith base = %.f and altitude = %.f is %.f",t.base,t.altitude,t.area);
}


int main()
{
     
}