#include<stdio.h>
void main()
{
   char E;
   printf("enter the character ");
   scanf("%c",&E);
   switch(E)
   {
       case'a':
       case'e':
       case'i':
       case'o':
       case'u':printf("%c is vowel",E);
       break;
       default:printf("invalid output");
       break;
   }
}
