#include<stdio.h>
#include<conio.h>
#define p printf 
#define s scanf

main()
{
	char a;
	clrscr();
	p("Enter any number:");
	s("%c",&a);
	if(a>='a' && a<='z')
	{
		p("lowercase:");
	}
	else if(a>='A' && a<='Z')
	{
		p("Uppercase");
	}
	else if(a>='1' && a<='9')
	{
		p("Digit:");
	}
	else
	{
		p("special character:");

	}
	getch();
}
