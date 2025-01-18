#include<stdio.h>
void main()
{
    int a[10],n,i,count=0,j;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    break;
                }
            }
        }
        printf("the duplicate is %d",count);
    }
