#include<stdio.h>
void main()
{
float per;
int s1,s2,s3,s4,s5,sum,total=500;
printf("enter the marks");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
sum=s1+s2+s3+s4+s5;
printf("\nsum=%d",sum);
per=(sum*100)/500;
printf("\nPercentage=%f",per);
}
