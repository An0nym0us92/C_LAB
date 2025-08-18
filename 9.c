/*To find the area and volume of cylinder*/
#include<stdio.h>
void main()
{
  float r,h,ar,v;
  printf("Enter the radius and length");
  scanf("%f",&r);
  scanf("%f",&h);
  ar=(2*3.14*r*r)+(2*3.14*h);
  printf("Area =%f",ar);
  printf("Volume =%f",v);

}
