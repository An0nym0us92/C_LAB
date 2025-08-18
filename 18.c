/*Objective : To input two numbers and find if m is multiple of n*/
#include<stdio.h>
void main()
{
  //Declaration
  int m,n;
  //Input
  printf("Enter a no. :");
  scanf("%d",&m);
  printf("\nEnter a no. :");
  scanf("%d",&n);
  //Logic
  if(m%n==0)
    printf("m is a multiple of n");
  else
    printf("m is not a multiple of n");
}
