#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
     int n;
     clrscr();
     p("Enter the value of n:");
     s("%d",&n);
     while (n>=1)
     {
	   p("%d \t",n);
	   n--;
     }
     getch();
}