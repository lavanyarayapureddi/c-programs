#include<stdio.h>
#include<math.h>
int main()
{
    int age;
    printf("enter the values of age");
    scanf("%d",&age);
    if(age>18)
    {
        printf("your eligible to vote %d",age);
    }
    else{
        printf("your not eligible to vote %d,age");
    }
    return 0;
}
   
