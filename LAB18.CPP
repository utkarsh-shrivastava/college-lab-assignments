#include<conio.h>
#include<stdio.h>
void main()
{
 int n,c,i,a=0,b=1;
 clrscr();
 printf("Enter value of n=");
 scanf("%d",&n);
 printf("%d%d",a,b);
 for(i=3;i<=n;i++)
 {
 c=a+b;
  a=b;
  b=c;

  printf("%d",c);
 }
getch();
}
