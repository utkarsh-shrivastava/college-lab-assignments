#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b,sub,mul;
 float div;
 clrscr();
 printf("Enter value of a and b=");
 scanf("%d%d",&a,&b);
 sub=a-b;
 mul=a*b;
 div=a/b;
 printf("Subtraction=%d\n",sub);
 printf("Multiplication=%d\n",mul);
 printf("Division=%f",div);
getch();
}

