/*Objective : To swap two numbers using third variable */
#include<stdio.h>
void main()
{

     //Declaration
     int a,b,c;
     //Input
     printf("Enter a: ");
     scanf("%d",&a);
     printf("\nEnter b : ");
     scanf("%d",&b);
     //Logic
     c=a;
     a=b;
     b=c;
     //Output
     printf("\n a :  %d",a);
     printf("\n b :  %d",b);

}
