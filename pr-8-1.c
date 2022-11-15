#include<stdio.h>
#define p printf
#define s scanf
int main()
{
	int a,b,*G1,*G2,G;
	
	p("Enter the value of a = ");
	s("%d",&a);
	p("Enter the value of b = ");
	s("%d",&b);

	G1=&a;
	G2=&b;
	
	G=*G2;
	*G2=*G1;
	*G1=G;
	
	p(" Swapping \na = %d\nb = %d\n",a,b);
}

