//Objective
#include<stdio.h>
void main()
{
   int n,i=1,f=1;
   printf("Enter a no. :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      f=f*i;
   printf("Factorial of %d : %d",n,f);

}
