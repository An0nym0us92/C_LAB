/*Objective : To check if input value is an alphabet or not*/
#include<stdio.h>
void main()
{
  //Declaration and input
  char c;
  printf("Enter a value : ");
  scanf("%c",&c);
  //Logic and output
  if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
     printf("\n Yes %c is an alphabet",c);
  else
     printf("\n No %c is not an alphabet",c);
}
