#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
    int a;
    clrscr();
    p("enter the value of a:");
    s("%d",&a);
    if(a % 2 ==0)
    {
	p("a is even");
    }
    else if(a == 0)
    {
	p(" a is neutral");
    }
    else
    {
	p("a is odd");
    }
    getch();
}