/*Objective : To calculate sum of digits of an integer */
#include<stdio.h>
void main()
{
   //Declaration
   int n,r,s=0;
   //Input
   printf("Enter a number : ");
   scanf("%d",&n);
   //Logic
   while(n!=0)
   {
       r=n%10;
       s+=r;
       n=n/10;
   }
   printf("\n Sum of digits : %d",s);

}
