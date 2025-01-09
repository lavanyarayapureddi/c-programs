#include<stdio.h>
void main()
{
    int a[10],b[10],i,n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        printf("the second array is");
        for(i=0;i<n;i++)
        {
             printf("%d",b[i]);
        }
    }
