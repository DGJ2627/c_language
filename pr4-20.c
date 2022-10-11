#include<stdio.h>
#define p printf

main()
{
	int i,j,s;
	for (i=1;i<=4;i++)
	{
		if(i==1)
		{
			p("    *\n");
		}
		else if(i==2)
		{
			p("   *  *\n");
		}
		else if(i==3)
		{
			p("  *    *\n");
		}
		else 
		{
			p(" *      *\n");
		}
		
	}
}
