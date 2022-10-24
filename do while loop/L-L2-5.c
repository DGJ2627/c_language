#include<stdio.h>
#define p printf
#define s scanf

main()
{
	
	int i;
	int n;
	i=1;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("Odd Numbers from 1 to %d:\n",n);
	do
	{
		if(i%2 != 0)
			printf("%d ",i);
	    	i++;
	}while(i<=n); 

}
