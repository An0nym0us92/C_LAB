/*Objective : To check whether a year is leap year or not */
#include<stdio.h>
void main()
{
   //Declaration
   int y;
   //Input
   printf("Enter year : ");
   scanf("%d",&y);
   //Logic
   if(y%4==0)
     printf( "\n Leap year ");
   else
     printf("\n Not a leap year ");

}
