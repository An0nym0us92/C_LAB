/*Objective : To check whether a no. is divisible by 5 and 11*/
#include<stdio.h>
void main()
{
   //Declaration
   int a;
   //Input
   printf("Enter a no. : ");
   scanf("%d",&a);
   //Logic and output
   if(a%5==0&&a%11==0)
    printf("\n Yes");
   else
    printf("\n No");

}
