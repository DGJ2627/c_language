#include<stdio.h>
#include<conio.h>
#define p printf 
#define s scanf

main() 
{
    int n, reversed = 0, remainder, original;
    p("Enter an integer: ");
    s("%d", &n);
    original = n;

    
    while (n != 0) 
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    
    if (original == reversed)
    {  
		printf("%d is a palindrome.", original);
    }
	else
    {
        printf("%d is not a palindrome.", original);
    }
    

}
