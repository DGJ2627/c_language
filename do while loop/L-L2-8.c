#include<stdio.h>  
#define p printf 
#define s scanf 
main()  
{  
    int num, count = 1, sum = 0;  
  
    printf("Enter a number:");  
    scanf("%d", &num);  
  
  
    do  
    {  
        sum = sum + count;  
        count++;  
    } while(count <= num); 
    printf("Sum = %d\n", sum);  
}
