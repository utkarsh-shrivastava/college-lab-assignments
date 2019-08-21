#include<conio.h>
#include<stdio.h>
void main()
{
 int f;
 float c;
 printf("Enter temperature in fahrenheit=");
 scanf("%d",&f);
 c=(5*(f-32))/9;
 printf("Temperature in celcius scale=%f",c);
getch();
}
