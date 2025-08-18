/*Objective : Input three values and find greater amongst them*/
#include<stdio.h>
void main()
{
  //Declaration
  int a,b,c,max;
  //Input
  printf("Enter a no. :");
  scanf("%d",&a);
  printf("\nEnter a no. :");
  scanf("%d",&b);
  printf("\nEnter a no. :");
  scanf("%d",&c);
  //Logic
  max=(a>b)?a:b;
  max=(max>c)?max:c;
  //Output
  printf("\nThe largest no. : %d",max);

}
