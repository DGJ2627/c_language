#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
    int base_salary,salary,hra,da,ta;
    clrscr();
    p("enter the salary:");
    s("%d",&salary);
    hra=salary*10/100;
    da=salary*5/100;
    ta=salary*8/100;
    base_salary=salary+hra+da+ta;
    p("gross base_salary %d:",base_salary);
    getch();

}