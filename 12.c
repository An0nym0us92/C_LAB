#include<stdio.h>
void main()
{
  float l,b,h,ar,v;
  printf("Enter length,breadth,height =");
  scanf("%f",&l);
  scanf("%f",&b);
  scanf("%f",&h);
  ar=2*(l*b)*(b*h)*(l*h);
  v=l*b*h;
  printf("Area = %f",ar);
  printf("Volume = %f",v);

}
