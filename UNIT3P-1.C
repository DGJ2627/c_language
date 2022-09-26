#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
    int a,b,c;
    clrscr();
    P("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    P("swap a two number with third variable:a:%d b:%d",a,b);
    getch();
}