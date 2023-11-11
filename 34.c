#include<stdio.h>
void main()
{

     int i,n,s=0;
     printf("Enter a no. :");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        s=s+i;
     }
     printf("\n Sum : %d",s);
}
