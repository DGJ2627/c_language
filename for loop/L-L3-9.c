#include<stdio.h>  
#define p printf 
#define s scanf 
main()  
{  
    int i,f,n;
    i=f=1;
	p("Enter the value of n:");
	s("%d",&n);
	
	for(i=1;i<=n;i++)
	{
        f=f*i;
			
    }  
	p("Factorial :%d",f);    
}  


