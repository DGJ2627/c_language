#include<stdio.h>

int com ()
{
    printf("Enter 1 for addtion :\n");
	printf("Enter 2 for subtraction :\n");
	printf("Enter 3 for multiplication :\n");
	printf("Enter 4 for division :\n");
	printf("Enter 5 for moduls :\n");
	printf("Enter 6 for Exit :\n");	
}

int add(int a,int b)
	{
		return a+b;
	}
int sub(int a,int b)
	{
		return a-b;
	}
int multi(int a,int b)
	{
		return a*b;
	}
int div(int a,int b)
	{
		return a/b;
	}
int mod(int a,int b)
    {
	    return a%b;
    }

void main()
{
	int n,choice;
	int a,b,answer;

	do{
	    com();
	    printf("What You Need : ");
	    scanf("%d",&n);

      if(n!=6)
      {
        printf("Enter Value A: ");
	    scanf("%d",&a);
	    printf("Enter Value B: ");
	    scanf("%d",&b);
	  }
	  
	
	switch(n)
	{
		if(n>=1 && n>=5)
		case 1 :
                      			
					answer = add(a,b);
					printf("Answer = %d\n ",answer );
				    break;				 
		case 2 :
					answer = sub(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 3 :
					answer = multi(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 4 :
					answer = div(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 5 :
			        answer = mod(a,b);
					printf("Answer = %d\n ",answer );
					break;
	    case 6 :
	    	       printf("you exit a calculter:");
				   break;		
	}
	
	}while(n!=6);

}

