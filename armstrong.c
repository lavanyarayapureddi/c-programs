#include<stdio.h>
#include<math.h>
void main()
{
    int n,temp,remainder,sum=0,x;
    printf("enter the value of n:");
    scanf("%d",&n);
    temp=n;
    x=floor(log10(n)+1);
    while(n!=0)
    {
       remainder=n%10;
       sum=sum+pow(remainder,x);
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
