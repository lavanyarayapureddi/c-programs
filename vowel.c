#include<stdio.h>
#include<math.h>
int main()
{
    char a;
    printf("enter the character of a");
    scanf("%c",&a);
    if(a=='a'|| a=='e'|| a=='i' || a=='o' || a=='u')
    {
      printf("given character is vowel");   
    }
    else
    {
        printf("given character is not a vowel");
    }
    return 0;
}
   
