#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
    int a,b;
    clrscr();
    p("enter the value of a:");
    s("%d",&a);
    p("enter the value of b:");
    s("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    p("swap two variable a:%d b:%d",a,b);
    getch();
}
