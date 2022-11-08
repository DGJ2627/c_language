#include<stdio.h>
#define p printf
#define s scanf
main()
{
int n,i;
p("enter value array=");
s("%d",&n);
int a[n],b[n],c[n];
for(i=0;i<n;i++)
{
p("a[%d]",i);
s("%d",&a[i]);
}
for(i=0;i<n;i++)
{
p("b[%d]",i);
s("%d",&b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
}
p("\n");
for(i=0;i<n;i++)
{
p("sum of a and b=%d",c[i]);
p("\n");
}
}
