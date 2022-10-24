#include<stdio.h>
#include<conio.h>

main()
{
 int a,b,c,d,i;
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
 getch();
}
