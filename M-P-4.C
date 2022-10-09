#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
	char choice;
	clrscr();
	p("M for monday :\n");
	p("T for Tuesday :\n");
	p("W for Wednesday :\n");
	p("t for Thursday :\n");
	p("F for Friday :\n");
	p("S for Saturday :\n");
	p("s for Sunday :\n");

	p("Enter today name :");
	s("%c",&choice);

	switch (choice)
	{
		case 'M':
			{
				p("Today is Monday:");
		break;
			}

		case 'T':
			{
				p("Today is Tuesday:");
				break;
			}

		case 'W':
			{
				p("Today is Wednesday:");
				break;
			}

		case 't':
			{
				p("Today is Thursday:");
				break;
			}

		case 'F':
			{
				p("Today is Friday:");
				break;
			}

		case 'S':
			{
				p("Today is saturday:");
				break;
			}

		case 's':
			{
				p("Today is Sunday:");
				break;
			}

	}
	getch();
}
