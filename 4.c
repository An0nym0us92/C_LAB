/*Enter no. of days and find no. of years , months,and years*/
#include<stdio.h>
void main()
{
  int days,wks,yrs,mo;
  printf("Enter no. of days = ");
  scanf("%d",&days);
  yrs=days/365;
  days=days%365;
  mo=days/30;
  days=days%30;
  wks=days/7;
  days=days%7;
  printf("Years = %d",yrs);
  printf("Months = %d",mo);
  printf("Weeks = %d",wks);
  printf("Days = %d",days);

}
