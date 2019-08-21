#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b,c;
 int d;
 clrscr();
 printf("Enter 3 numbers=");
 scanf("%d%d%d",&a,&b,&c);
 (a>b && a>c)?(d=a):((b>a && b>c)?(d=b):(d=c));
 printf("Largest using ternatary operator=%d",d);
getch();
}
