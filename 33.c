#include<stdio.h>
void main()
{
  int i,a=0,b=1,c=0,n;
  printf("Enter no. of terms :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%d  ",c);
     a=b;
     b=c;
     c=a+b;
  }
}
