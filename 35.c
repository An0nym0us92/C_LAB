#include<stdio.h>
void main()
{
    int i=0,j=0,k=1,n;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(k*i);j++)
        {
           printf("* ");
        }
        k=i;
        printf("\n");

    }
}
