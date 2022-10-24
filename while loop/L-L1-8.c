#include<stdio.h>  
#define p printf 
#define s scanf 
main()  
{  
    int num, count = 1, sum = 0;  
  
    printf("Enter a number:");  
    scanf("%d", &num);  
  
  
    while(count <= num)  
    {  
        sum = sum + count;  
        count++;  
    }  
    printf("Sum = %d\n", sum);  
}
