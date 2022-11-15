#include<stdio.h>
#define p printf
#define s scanf

void main()
{
	int n,i,*ptr,g;
	p("Enter the size of array:");
	s("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		p("Enter the array a[%d]:",i);
		s("%d",&a[i]);
	}
	ptr=&a[n-1];
	
	
	
	for(i=0;i<n;i++)
	{
		p("Enter of array in reverse order %d:\n",*ptr--);
	}
}
