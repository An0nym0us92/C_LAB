//Objective : To compute DBO*/
#include<stdio.h>
#include<math.h>
void main()
{
  //Declaration
  float drate,sc,hc,TBO;
  //Input
  printf("Enter the demand rate : ");
  scanf("%f",&drate);
  printf("\nEnter the setup cost :");
  scanf("%f",&sc);
  printf("\nEnter the holding cost :");
  scanf("%f",&hc);
  //Logic
  TBO=sqrt((2*sc)/(drate*hc));
  //Output
  printf("\nThe TBO : %f",TBO);
}

