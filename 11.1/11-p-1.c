#include<stdio.h>
#define p printf
#define s scanf
int main()
{
	int a, area = 0;
	int *G1;
	p("Enter the value = ");
	s("%d",&a);
	G1 = &a;
	area = (*G1) * (*G1);
	p("value scqur is %d",area);
}
