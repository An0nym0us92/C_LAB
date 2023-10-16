/*Enter radius of sphere and print area and volume of it*/
#include<stdio.h>
void main()
{
  float r=0.0,ar=0.0,v=0.0;
  printf("Enter the radius ");
  scanf("%f",&r);
  ar=4*3.14*r*r;
  v=(4/3)*(3.14)*r*r*r;
  printf("The area of sphere is %f",ar);
  printf("\n Volume is %f",v);

}
