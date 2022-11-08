#include <stdio.h>
#define p printf
#define s scanf
main()
{
int n1,n2,i,j;
p("enter value of row=");
s("%d",&n1);
p("Enter value columns= ");
s("%d", &n2);
int a[n1][n2], transpose[10][10];
for (i = 0; i < n1; ++i)
{
for (j = 0; j < n2; ++j)
{
p("a[%d][%d]",i,j);
s("%d",&a[i][j]);
}
}
p("\nEntered matrix: \n");
for ( i = 0; i < n1; ++i)
{
for (j=0; j < n2; ++j)
{
p("%d ", a[i][j]);
if (j==n2-1)
p("\n");
}
}
for ( i = 0; i < n1; ++i)
for ( j = 0; j < n2; ++j) {
transpose[j][i] = a[i][j];
}
p("\nTranspose of the matrix:\n");
for (i = 0; i < n1; ++i)
for ( j = 0; j < n2; ++j)
{
p("%d ", transpose[i][j]);
if (j == n1 - 1)
p("\n");
}
}
