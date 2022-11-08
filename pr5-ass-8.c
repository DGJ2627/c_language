#include<stdio.h>
#define p printf
#define s scanf
main()
{
int i,j,n1,n2,sum=0;
p("enter value of row=");
s("%d",&n1);
p("enter value of colunm=");
s("%d",&n2);
int a[n1][n2];
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
p("a[%d][%d]",i,j);
s("%d",&a[i][j]);
}
}
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
p("%d\t",a[i][j]);
}
p("\n");

}
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if (i==j)
{
sum=sum+a[i][j];
}
}
p("\n");
}
p("sum of diagonal=%d",sum);

}
