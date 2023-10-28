//Harmonic
#include<stdio.h>
void main()
{
    float i,n,s=0;
    printf("Enter a no. :");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
      s=s+(1/i);
    }
    printf("Harmonic Sum : %f",s);

}
