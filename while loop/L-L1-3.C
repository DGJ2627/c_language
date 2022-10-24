#include<stdio.h>

#define p printf
#define s scanf

main()
{
     int i=1,n;
     p("Enter the value of n:");
     s("%d",&n);
     while (i<=n)
     {
	   if (i%2==1)
	   {
	   	 p("%d \t",n);
	     i++;
	   }
     }
     
}
