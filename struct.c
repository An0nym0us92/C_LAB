#include<stdio.h>
struct Student
{
  int rno;
  int age;
  char n[30];
  int marks;
}a;
void main()
{
  printf("Enter roll no :");
  scanf("%d", &a.rno);
  printf("\nEnter marks :");
  scanf("%d", &a.marks);
  printf("\nEnter name :");
  scanf("%s", a.n);
  printf("\nEnter age :");
  scanf("%d", &a.age);
  printf("\nName :%s",a.n);
  printf("\nAge :%d",a.age);
  printf("\nMarks :%d",a.marks);
  printf("\nRoll number :%d",a.rno);
}
