#include<stdio.h>
#include<conio.h>

main()
{
   float amt,total_amt,surcharges;
   int unit;
   clrscr();
   printf("Enter the unit:");
   scanf("%d",&unit);
   if(unit <= 50)
   {
	 amt = unit * 0.50;
   }
   else if(unit <= 150)
   {
	  amt = 25 +  ((unit - 50)*0.75) ;
   }
   else if(unit <= 250)
   {
       amt = 100 + ((unit - 150)*1.20) ;
   }
   else
   {
       amt = 220 + ((unit - 250)*1.50) ;
   }
   surcharges= amt * 0.20;
   total_amt=  amt+surcharges;

   printf("total bill rs :%.2f ",total_amt);
   getch();

}
