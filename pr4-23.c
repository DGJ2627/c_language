#include<stdio.h>
#define p printf 

main()
{
	char i,j,a,s;
	for (i=5;i>=1;i--)
	{
		for(s=1;s<=i-1;s++)
		{
			p(" ");
		}
		for(j=5;j>=i;j--)
		{
			p("%d",j);
		}
		for(a=i+1;a<=5;a++)
		{
			p("%d",a);
		}
		p("\n");
	}
}
