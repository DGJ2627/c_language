#include<stdio.h>
#include<conio.h>

main()
{
 int a,b,c,d,e,f,g,h,i,j;
 clrscr();

 for(i=5; i>=1; i--)
 {//num
  for(a=1; a<=i; a++)
  {
   printf("%d",a);
  }
  //space
  for(b=5; b>i; b--)
  {
   printf(" ");
  }
  //space
  for(c=5; c>i; c--)
  {
   printf(" ");
  }
  //num
  for(d=i; d>=1; d--)
  {
   printf("%d",d);
  }
  printf("\n");
 }

 for(i=1; i<=5; i++)
 {
  for(e=1; e<=i; e++)
  {
   printf("%d",e);
  }
  for(f=5; f>i; f--)
  {
   printf(" ");
  }
  for(g=5; g>i; g--)
  {
   printf(" ");
  }
  for(h=i; h>=1; h--)
  {
   printf("%d",h);
  }
  printf("\n");
 }
 getch();
}