/*Objective : To print numbers from i to n input by the user*/
#include<stdio.h>
void main()
{
  //Declaration and input
  int n,i=1;
  printf("Enter a no. : ");
  scanf("%d",&n);
  no:
  {
   printf("\n %d",i);
   i++;
  }
  if(i<=n)
    goto no;
}
