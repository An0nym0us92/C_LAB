/*Objective : To convert temperature from Fahrenheit to Celsius*/
#include<stdio.h>
void main()
{
    //Declaration
    float c,fa;
    //Input
    printf("Enter temp. in deg. Fahrenheit : ");
    scanf("%f",&fa);
    //Logic
    c=(fa-32.0)*(5.0/9.0);
    //Output
    printf("\nTemperature in Celsius : %f",c);

}
