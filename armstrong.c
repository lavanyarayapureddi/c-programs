#include<stdio.h>
void main()
{
    int n,temp,remainder,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
       remainder=n%10;
       sum=sum+(remainder*remainder*remainder);
       n=n/10;
    }
    if(sum==temp)
    {
        printf("given number is armstrong");
    }
    else
    {
        printf("given number is not a armstrong");
    }
}
