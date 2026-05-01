#include<stdio.h>
#include<string.h>
struct customer {
	 int account_number;
	 char name[50];
	 float balance;
};

intmain()
{
	struct customer c1;
	int choice;
	float amount;
	int account_created =0;
	
	do
	{
	printf("welcome to S&N Bank\n");
	printf("1. create account");
	printf("2. deposit money ");
	printf("3. withdraw money");
	printf("4. check balance");
	printf("5. display account details");
	printf("6. exit");
	printf("enter your choice:");
	scanf("%d", &choice);
	
	
	switch (choice)
	{
		
		case 1:
			printf("create account");
			printf("enter account number:");
			scanf("%d%d",c1.account_number);
			printf("enter account holder name:");
			scanf("[^]",c1.name);
			printf("enter your initial balance:");
			scanf("%d%d", c1.balance);
			if(	c1.balance<0)
			{
				printf("initial balance cannot be negative. kindly set to 0");
			}
			
			if (account_created=1)
			{
				printf("account is already created");
			}
			break ;
			
		case 2:
			
		
	}
		
} 

return 0;
}

