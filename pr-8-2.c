#include<stdio.h>
#define p printf
#define s scanf

void main()
{
	int g[1000];
	int n,i;
	int *ptr=&g;
	
	p("Enter the size of array:");
	s("%d",&n);
   	
	
	
	for(i=0;i<n;i++)
	{
		p("Enter the elements in array g[%d]:",i);
		s("%d",ptr);
		ptr++;
	}
	
    ptr=g;
		
	for (i=0;i<n;i++)
	{
		p("array elemets: %d \n",*ptr);
		ptr++;	
	}
}
