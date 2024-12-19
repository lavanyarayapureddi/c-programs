#include<stdio.h>
void main(){
    int n,rev=0,remainder;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    printf("the reverse of a number is %d",rev);
}
