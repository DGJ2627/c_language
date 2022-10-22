#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
     char i='a';
     clrscr();
     p("Alphbets foem a - z are : \n");
     while (i<='z')
     {
	 p("%c \t",i);
	 i++;
	 getch();

     }
     getch();
}