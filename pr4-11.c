#include<stdio.h>
#define p printf

main()
{
	int i,j,s;
	for (i=5;i>=1;i--)
	{
		for(s=1;s<=5-i;s++)
		{
			p(" ");
		}
		for (j=1;j<=i;j++)
		{
			p("%d",j);
		}
		p("\n");
	}
}
