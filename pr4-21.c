#include<stdio.h>
#define p printf 

main()
{
	char i,j;
	for (i='A';i<='E';i++)
	{
		for (j='A';j<=i;j++)
		{
			p("%C ",i);
		}
		p("\n");
	}
}
