#include<conio.h>
#include<stdio.h>
void main()
{
 int m,n,s=0,i;
 clrscr();
 printf("Enter the starting position=");
 scanf("%d",&m);
 printf("\nEnter the end position=");
 scanf("%d",&n);
 for(i=m;i<=n;i++)
  s+=i;
 printf("Sum=%d",s);

getch();
}
