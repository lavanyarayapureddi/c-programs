#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    printf("enter the s1,s2:");
    scanf("%s%s",s1,s2);
    strcpy(s1,s2);
    printf("string 1 is %s\n",s1);
    printf("string 2 is %s\n",s2);
}
