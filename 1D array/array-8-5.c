#include<stdio.h>
#define p printf 
#define s scanf
 
main()
{
	int a[100],b[100],c[100];
	int i,j,n1,n2;
	printf("enter the length of a :");
    scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("a[%d]:", i);
		scanf("%d",&a[i]);
	}
	printf("\narray a is \n");
	for(i=0;i<n1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n----------\n\n");
	printf("enter the length of b :");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("b[%d]:", i);
		 scanf("%d",&b[i]);
	}
	printf("\narray b is \n");
	for(i=0;i<n2;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n\n----------\n\n");
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=n1;i<n1,j<n1+n2;i++,j++)
	{
		c[j]=b[i];
		
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",c[i]);
	}
}

