#include<stdio.h>
#include<conio.h>

main()
{
 char i,k,j;

 clrscr();

 for(i='A'; i<='E'; i++)
 {
  for(k='E'; k>i; k--)
  {
   printf(" ");
  }
  for(j=i; j>='A'; j--)
  {
   printf("%c",j);
  }
  printf("\n");
 }
 getch();
}