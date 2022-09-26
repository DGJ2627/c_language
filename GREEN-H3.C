#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
    float celsius,fahrenheit;
    clrscr();
    printf("enter the celsius:");
    s("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    p("convert celsius to farhenheit %f:",fahrenheit);
    getch();

}