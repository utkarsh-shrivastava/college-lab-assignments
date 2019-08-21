#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b,temp;
 clrscr();
 printf("Enter first number=");
 scanf("%d",&a);
 printf("\nEnter second number=");
 scanf("%d",&b);
 temp=a;
 a=b;
 b=temp;
 printf("After swapping->\n");
 printf("First number=%d",a);
 printf("\nSecond number=%d",b);
getch();
}
