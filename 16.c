/*Objective : To calculate frequency for different value of c*/
#include<stdio.h>
void main()
{
  //Declaration
  float l,r,c,f;
  //Input
  printf("Enter the length :");
  scanf("%f",&l);
  printf("\nEnter radius :");
  scanf("%f",&r);
  printf("\nEnter the value of c (0.01 to 0.03) :");
  scanf("%f",&c);
  //Logic
  f=sqrt((1/(l*c))-((r*r)/(4*c*c)));
  //Output
  printf("\nFrequency : %f",f);

}
