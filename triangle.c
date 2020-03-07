#include<stdio.h>
void main()
{
float b,area,h,c,a;
printf("enter the value of a,b,h");
scanf("%f %f %f",&b,&a,&h);
area=0.5*b*h;
c=a+b+h;
printf("Area of triangle=%f\n",area);
printf("perimeter of triangle=%f",c);
}
