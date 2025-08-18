/*To swap 2 numbers using call by reference*/
#include<stdio.h>
#include<conio.h>
void callref(int *,int *);
void main()
{
    printf("Enter two numbers :");
    int a,b;
    scanf("%d %d",&a, &b);
    printf(" a = %d",a);
    printf("\n b = %d",b);
    callref(&a,&b);
    printf("\n a = %d",a);
    printf("\n b = %d",b);
}
void callref(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
