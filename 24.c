/*Objective : To reverse a no. */
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
      s=s*10+r;
      n=n/10;
  }
  printf("\n Reversed number : %d",s);

}
