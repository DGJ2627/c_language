#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int i,n;
	p("Enter the value of n:");
	s("%d",&n);
	p("-------------------------------\n");
	for(i=1;i<=n;i++)
	{
		if(i % 2 != 0)
		{
			p("%d ",i);
		}
	}
}
