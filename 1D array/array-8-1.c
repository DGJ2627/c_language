#include<stdio.h>
#define p printf 
#define s scanf

main()
{
	int i,n1;
	
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
	

}
