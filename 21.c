/*Objective : To compute area for given r and h */
#include<stdio.h>
void main()
{
   //Declaration
   float r,h,a;
   //Input
   printf("Enter radius and height : \n");
   scanf("%f",&r);
   scanf("%f",&h);
   //Logic
   a=(3.14*r*r)+(2*3.14*r*h);
   //Output
   printf("\n Area : %f",a);

}
