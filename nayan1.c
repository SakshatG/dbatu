#include<stdio.h>
void main()
{
int marks;
printf("Enter your marks");
scanf("%d",&marks);
if(marks>100)
printf("Invalid marks");
else if(marks<0)
printf("invalid marks");
else if(marks>=75)
printf("grade is A");
else if(marks>=50)
printf("grade is B");
else if(marks<50)
printf("Fail");
}
