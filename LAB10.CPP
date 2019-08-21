#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter first number=");
 scanf("%d",&a);
 printf("\nEnter second number=");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("After swapping->");
 printf("\nFirst number=%d",a);
 printf("\nSecond number=%d",b);
getch();
}
