#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int i,n;
	p("Enter the value of n:");
	s("%d",&n);
	p("-------------------------------\n");
	for(i=0;i<=n;i++)
	{
		p("%d ",i);
	}
}
