#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
   int a,b,c,d;
   clrscr();
   p("value of a:");
   s("%d",&a);
   p("value of b:");
   s("%d",&b);
   p("value of c:");
   s("%d",&c);
   p("value of d:");
   s("%d",&d);
   if(a>b && a>c && a>d)
   {
       p("a is max");
   }
   else if(b>a && b>c && b>d)
   {
       p("b is max");
   }
   else if(c>a && c>b && c>d)
   {
       p("c is max");
   }
   else
   {
       p("d is max");
   }
   getch();
}
