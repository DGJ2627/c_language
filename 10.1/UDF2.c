#include<stdio.h>


void divison(int n)
{

	if(n%3 == 0 && n%5 == 0)
	{
		prnitf("your number is divison by 3&5 %d");
	
		
		
	}
	else
	{
		printf("enter the is not divison by 3&5");
	}
}


void main()
{
	int n;
	printf("enter anyt number");
    scanf("%d",&n);
	divison(n);
	
}
