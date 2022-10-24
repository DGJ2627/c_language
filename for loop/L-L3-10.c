#include<stdio.h>  
#define p printf 
#define s scanf

main()
{
	int n,i=1;
	p("Enter the value of n:");
	s("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		p(" %d * %d = %d\n ", n , i ,n*i);
	}
	
	
}
