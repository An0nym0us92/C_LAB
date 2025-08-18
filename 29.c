/*Objective : To print a table of n using goto*/
#include<stdio.h>
void main()
{
  //Declaration
  int n,i=1,f;
  //Input
  printf("Enter n : ");
  scanf("%d",&n);
  //Logic
  t:
    {
    f=n*i;
    printf("\n%d * %d = %d",n,i,f);
    i++;
    }
    if(i<=10)
      goto t;

}
