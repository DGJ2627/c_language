#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
    int a,b;
    clrscr();
    p("enter the value of a: and b:");
    s("%d %d",&a,&b);
    if(a>b)
    {
	p("b is min");
    }
    else
    {
       p("a is min");
    }
    getch();
 }