#include<stdio.h>
#define p printf 

main()
{
	char i,j;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				p("0");
			}
			else 
			{
				p("1");
			}
		}
		p("\n");
	}
}
