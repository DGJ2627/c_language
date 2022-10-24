#include<stdio.h>
#include<conio.h>

main()
{
 int i,k,j;
 clrscr();

 for(i=1; i<=5; i++)
 {
  for(k=i; k<5; k++)
  {
   printf(" ");
  }
  for(j=1; j<=i; j++)
  {
   printf("%d",j);
  }
  printf("\n");
 }
 getch();
}