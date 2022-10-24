#include<stdio.h>
#define p printf 
#define s scanf

main()
{
	int i,n,leg=0;
	p("Enter the array range:");
	s("%d",&n);
	
	int a[n];
	for (i=0;i<n;i++)
	{
		p("a[%d]:",i);
		s("%d",&a[i]);
		
		leg++;
	}
	p("--------------------\n");
	for(i=0;i<n;i++)
	{
		p("array a[%d] %d\n",i,a[i]);
	}
	p("--------------------\n");
	p("array length :%d",leg);
}
