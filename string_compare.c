#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    int len;
    printf("enter the s1");
    scanf("%s",s1);
    len=strlen(s1);
    printf("the length of s1 is %d\t\n",len);
    printf("enter the s2");
    scanf("%s",s2);
    if(strcmp(s1,s2)==0)
    {
        printf("both are equal");
    }
    else
    {
        printf("not equal");
    }
}
