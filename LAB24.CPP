#include<conio.h>
#include<stdio.h>
void main()
{
 int n,d,rev=0;
 clrscr();
 printf("Enter a number=");
 scanf("%d",&n);
 while(n>0)
 {
  d=n%10;
  rev=(rev*10)+d;
  n/=10;
 }
 printf("\nReverse=%d",rev);
 getch();
 }
