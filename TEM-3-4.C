#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
     int  n, sum = 0 , first , last ;
     clrscr();
     p(" Enter an number: ");
     s("%d",&n);
     last = n % 10 ;
     while (n >= 10)
     {
	 n = n / 10;
     }
     first = n;
     sum = first + last;
     p("sum of first and last number: %d",sum);
     getch();
}