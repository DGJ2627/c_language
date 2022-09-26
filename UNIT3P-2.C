#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
    int a,b;
    clrscr();
    P("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    P("swap two variable without third vatiable : %d %d",a,b);
    getch();
}