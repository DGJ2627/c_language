#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
     int n,i;
     clrscr();
     p(" Enter an number: ");
     s("%d",&n);
     p("multiplication table:\n");
     for(i=1;i<=10;i++)
     {
	 printf(" %d * %d = %d \n ", n,i,i*n);
     }
     getch();
}