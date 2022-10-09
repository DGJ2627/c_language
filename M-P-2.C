#include<stdio.h>
#include<conio.h>

main()
{
     int num;
     clrscr();
     printf("Enter any number:");
     scanf("%d",&num);

     if(num == 0)
     {
	    printf("You enter a number of value is 0:");
     }
     else if(num < 0)
     {
	    printf("You enter a number of value is negtive:");
     }
     else
     {
	    (num % 2 == 0)
	  ?

	     printf("This number is even:")

	  :

	     printf("This number is odd:");
     }

     getch();

}
