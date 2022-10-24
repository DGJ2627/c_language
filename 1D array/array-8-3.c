#include<stdio.h>
#define p printf 
#define s scanf

main()
{
	int i,n;
	float sum=0,ave;
	p("Enter the array range:");
	s("%d",&n);
	
	int a[n];
	for (i=0;i<n;i++)
	{
		p("a[%d]:",i);
		s("%d",&a[i]);
		
	
	}
	p("--------------------\n");
	for(i=0;i<n;i++)
	{
		p("array a[%d] %d\n",i,a[i]);
        sum=sum+a[i];	
	}
	p("--------------------\n");
    ave=sum/n;
	p("average of array :%.2f",ave);
}
