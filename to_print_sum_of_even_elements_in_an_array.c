#include<stdio.h>
void main()
{
    int n,i,a[10],sum=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf(" the sum is %d",sum);
}
