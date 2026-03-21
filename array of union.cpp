#include<stdio.h>
#include<string.h>
union student  
{
	int rollno;
	char name [10];
	float fees ;
};
int main()
{
	union student s1[5];
	int i;
	printf(" student details are :");
	for (i=0;i<5;i++)
	scanf("%d%s%f", s1[i].rollno, s1[i].name , s1[i].fees);
	
	printf("student record :");
	for (i=0;i<5;i++);
	printf ("%d%S%f", s1[i].rollno , s1[i].name, s1[i].fees);
	return 0;
		
 } 
