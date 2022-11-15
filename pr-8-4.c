#include<stdio.h>
#define p printf


void main()
{
	char str[1000],*ptr;
	int i=0;
	
	p("Enter any string:");
	gets(str);
	
	ptr=str;
	
	while(*ptr != '\0')
	{
		i++;
		ptr++;
	}
	
	p("Length of string :%d",i);
}
