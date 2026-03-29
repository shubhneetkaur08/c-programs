#include <stdio.h>
int add( int a, int b);
int subtract( int a, int b);
int multiply ( int a, int b);
float divide ( int a, int b);


int main ()
{
	
	int num1,num2, choice; 
	float result;
	
	printf(" enter two numbers: ");
	scanf(" %d%d", &num1, &num2);
	
	printf("calculation options:\n ");
	printf("1. Addition \n");
	printf("2. Subtract \n");
	printf("3. Multiply \n");
	printf("4. divide \n");
	
	printf("enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			result= add(num1,num2);
			printf("Result=%f", result);
			break;
			
		case 2: 
	        result= subtract(num1,num2);
	        printf("Result=%f", result);
	        break;
	        
	    case 3:
	    	result= multiply(num1,num2);
	    	printf("Result=%f", result);
	    	break;
	    	
	    case 4:
	    	if (num2 !=0) 
	    	{
	    	result= divide(num1,num2);
	    	printf("Result=%f", result);
	        }
	        else 
	        {
	        	printf(" The number is not divisible by 0");
			}
			break;
			
		default:
			printf(" invalid choice ");
			
	return 0;    
	}
	
}
	int add (int a,int b)
	{
	return a+b;
    }
    
	int subtract (int a,int b)
	{
	return a-b;
    }
	
	int multiply ( int a , int b)
	{
	return a*b;
    }
	
	float divide (int a, int b)
	{
	return (float)a/b;
    }
	
	

