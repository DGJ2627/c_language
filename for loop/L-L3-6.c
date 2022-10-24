#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int i,n;
	p("Enter the value of n:");
	s("%d",&n);
	p("-------------------------------\n");
	for(i=n;i>=1;i--)
	{
		if(i % 2 == 0)
		{
			p("%d ",i);
		}
	}
}
