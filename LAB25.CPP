#include<conio.h>
#include<stdio.h>
void main()
{
 int i;
 clrscr();
 for(i=1900;i<=1920;i++)
 {
  if(i%400==0 || i%4==0 && i%100!=0)
   printf("%d\n",i);
  }
 getch();
 }
