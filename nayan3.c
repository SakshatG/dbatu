#include<stdio.h>
void main()
{
int amount,rate,time,ans;
printf("enter principal amount,rate of amount,period of time");
scanf("%d%d%d",&amount,&rate,&time);
ans=(amount*rate*time)/100;
printf("\nsimple interest=%d",ans);
}
