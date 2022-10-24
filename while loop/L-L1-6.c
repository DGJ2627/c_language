#include<stdio.h>
#define p printf
#define s scanf

main()
{
    int i, n;
    i=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d \n", n);
    
    while(i<=n)
    {

        if(i%2==0)
        {
            printf("%d", i);
        }

        i++;
    }
}
