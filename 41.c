#include<stdio.h>
void main()
{
   int n,a,b,c=0,r1,r2;
   scanf("%d",&n);
   a=n;
   b=n;
   while( a!=0)
   {
       r1=a%10;b=n;
       while(b!=0)
       {
           r2=b%10;
           if(r1==r2)
            c++;
            b/=10;
       }
       printf("\n %d : %d times ",r1,c);
       c=0;
       a/=10;
   }
}
