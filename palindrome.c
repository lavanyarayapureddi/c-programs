#include<stdio.h>
void main()
{
    int n,temp,rev=0,remainder;
    printf("Enter the value of n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
