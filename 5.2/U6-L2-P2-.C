#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("enter the value of a:");
    scanf("%d",&a);
     printf("enter the value of b:");
    scanf("%d",&b);
     printf("enter the value of c:");
    scanf("%d",&c);

    if(a<b)
    {
	  if(a<c)
	  {
		printf("a is min");
	  }
	  else
	  {
	       printf("c is min");
	  }
    }
    else
    {
	  if(b<c)
	  {
	       printf("b is min");
	  }
	  else
	  {
	       printf("c is min");
	  }
    }
    getch();
}