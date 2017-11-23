#include<stdio.h>
void main()
{
int r,h;
float area,pi=3.14;
//where pi=3.14;
printf("enter the value of radius:");
scanf("%d",&r);
printf("enter the value of height:");
scanf("%d",&h);
area=pi*r*r*h;
printf("area of cylinder=%f",area);
}
