#include<stdio.h>
#define p printf
#define s scanf

main()
{
    int i, n;
    i=2000;
    n=3000;
    printf("leap year from 2000 to 30000 \n", n);
    
    while(i<=n)
    {

        if(i%4==0)
        {
            printf("%d \t", i);
        }

        i++;
    }
}
