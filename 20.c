/*Objective : To compute distance from given u,t,a */
#include<stdio.h>
void main()
{
  //Declaration
   float u,t,a,d;
  //Input
   printf("Enter initial velocity : \n");
   scanf("%f",&u);
   printf("\n Enter time : ");
   scanf("%f",&t);
   printf("\n Enter acceleration :");
   scanf("%f",&a);
   //Logic
   d=(u*t)+(0.5*a*t*t);
   //Output
   printf("\n The distance : %f",d);
}
