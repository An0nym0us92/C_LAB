#include<stdio.h>
void main()
{
  //Declaration
  float l,b,a,p;
  //Input
  printf("Enter length : ");
  scanf("%f",&l);
  printf("\nEnter breadth : ");
  scanf("%f",&b);
  //Logic
  a=l*b;
  p=2*(l+b);
  //Output
  printf("\nPerimeter of rectangle : %f",p);
  printf("\nArea of rectangle : %f",a);

}
