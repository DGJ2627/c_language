#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int n,sum=0,mul=1,rem;
	
	p("Enter the number:");
	s("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		mul*=reml;
		n/10;
	}
	
	if(sum==mul)
	{
		p("It's magic !! \nsum : %d\nmul1 :%d",sum,mul);
	}
	else
	{
		p("It's not magic !! \nsum : %d\nmul1 :%d",sum,mul);
	}
}
