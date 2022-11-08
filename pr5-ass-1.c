#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int i,n;
    p("enter value of array=");
    s("%d",&n);
int a[n];
for(i=0;i<n;i++)
   {
      p("enter number of a[%d] :",i);
      s("%d",&a[i]);
   }
p("\n");
p("negative values are =\n");
for(i=0;i<n;i++)
{
   if(a[i]<0)
      { 
        p("%d\n",a[i]);
      }
}

}
