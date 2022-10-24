#include<stdio.h>
#define p printf 
#define s scanf

main()
{
	int i,n1,n2;
	float sum=0,ave;
	p("Enter the array range n1:");
	s("%d",&n1);
	
	int a[n1];
	for (i=0;i<n1;i++)
	{
		p("a[%d]:",i);
		s("%d",&a[i]);
		
	
	}
	p("--------------------\n");
	for(i=0;i<n1;i++)
	{
		p("array a[%d] %d\n",i,a[i]);
        	
	}
	p("--------------------\n");
    int b[n2];
    p("Enter the array range n2:");
	s("%d",&n2);
	for (i=0;i<n2;i++)
	{
		p("b[%d]:",i);
		s("%d",&b[i]);
		
	
	}
	p("--------------------\n");
	for(i=0;i<n2;i++)
	{
		p("array b[%d] %d\n",i,b[i]);
        	
	}
	p("--------------------\n");
	if (n1==n2)
	{
		int c[n1];
		for (i=0;i<n1;i++)
		{
			c[i]=a[i]+b[i];
			p("\naddition of two array c[%d] %d:",i,c[i]);
		}
		
	}
	else 
	{
		p("Enter same range :");
	}
}
