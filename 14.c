/*Objective : To find EOQ*/
#include<stdio.h>
#include<math.h>
void main()
{
  //Declaration
  float drate,sc,hc,EOQ;
  //Input
  printf("Enter the demand rate : ");
  scanf("%f",&drate);
  printf("\nEnter the setup cost :");
  scanf("%f",&sc);
  printf("\nEnter the holding cost :");
  scanf("%f",&hc);
  //Logic
  EOQ=sqrt((2*drate*sc)/hc);
  //Output
  printf("\nThe EOQ : %f",EOQ);
}
