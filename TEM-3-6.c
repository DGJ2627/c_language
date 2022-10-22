#include<stdio.h>  
#define p printf 
#define s scanf

main()
{
	int n,i,f;
	i=f=1;
	p("Enter the value of n:");
	s("%d",&n);
	while (i<=n)
	{
		f=f*i;
		i++;
	}
	p("Factorial :%d",f);
}
