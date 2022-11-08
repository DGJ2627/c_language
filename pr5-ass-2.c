#include <stdio.h>
#define p printf
#define s scanf
main()
{
int n, i,min;
int max1, max2;
int a[n];
p("Enter size of the array = ");
s("%d", &n);
for(i=0; i<n; i++)
   {
        p("a[%d]: ",i);
        s("%d", &a[i]);
   }
        max1 = max2 = min;
for(i=0; i<n; i++)
{
        if(a[i] > max1)
   {
        max2 = max1;
        max1 = a[i];
   }
else if(a[i] > max2 && a[i] < max1)
   {
        max2 = a[i];
   }
} 
    p("First largest = %d\n", max1);
    p("Second largest = %d", max2);
}
