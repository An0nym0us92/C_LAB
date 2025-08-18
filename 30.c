/*Objective : To find quotient and remainder*/
#include<stdio.h>
void main()
{
  //Declaration
  int n1,n2,r,q;
  //Input
  printf("Enter a no. : ");
  scanf("%d %d",&n1,&n2);
  //Logic
  r=n1%n2;
  q=n1/n2;
  //Output
  printf("\n Remainder : %d",r);
  printf("\n Quotient : %d",q);
}
