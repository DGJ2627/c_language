#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int i,n;
	
	p("-------------------------------\n");
	for(i=2000;i<=3000;i++)
	{
		if(i % 4 == 0)
		{
			p("%d\t",i);
		}
	}
}
