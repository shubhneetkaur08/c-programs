#include<stdio.h>
#include<string.h>
union employee 
{
	char name [10] ;
	int number ;
	float salary ;
};

int main()
{
	union employee E1;
	strcpy(E1.name , "shubhneet");
	E1. number = 7973391274;
	E1.salary = 800000;
	
	printf("name : %s\n",E1.name);
	printf("number: %d\n", E1.number);
	printf("salary: %f\n", E1.salary);
	
	return 0;
	
}
