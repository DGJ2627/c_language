#include<stdio.h>  
#define p printf 
#define s scanf 
main()  
{  
    int num, count = 1, sum = 0;  
  
    printf("Enter a number:");  
    scanf("%d", &num);  
    for(count=1;count<=num;count++)  
     {  
        sum = sum + count;  
        count++;  
     }  
    printf("Sum = %d\n", sum);  
}
