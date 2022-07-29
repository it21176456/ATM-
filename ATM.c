#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

void mainmenu();
void erromsg();
void checkbalance(float balance);
void withdraw(float balance);
void deposit(float balance);
void menuexit();

int main()
{
	int option,choose;
	
	bool again=true;

	
	float balance;

	while(again)
	{
		mainmenu();

		scanf("%d",&option);

		FILE*fpointer;
		fpointer=fopen("balance.txt","r");
		if(fpointer==NULL)
		{
			printf("Error! File not found!");
			return -1;
		}
		else
		{
			fscanf(fpointer,"%f",&balance);
		}

		switch(option)
		{
			case 1:
			system("cls");
				
				checkbalance(balance);
				break;
			case 2:
			system("cls");
				
				withdraw(balance);
				break;
			case 3:
			system("cls");
				
				deposit(balance);
				break;
			case 4:
			system("cls");
				menuexit();
				return 0;
			default:
			    erromsg();
				break;
		}

	printf("would you like to do a another transaction??????\n");
	printf("<1>yes\n");
	printf("<2>no\n");
	
	scanf("%d",&choose);
	system("CLS");
	if(choose==2)
	{
	    again=false;
	    menuexit();
	}
	fclose(fpointer);
	}
	
	return 0;
}

void mainmenu()
{
	printf("============HELLO============\n");
	printf("============GOOD MORNING============\n");
	printf("============WELCOME TO SAMPATH ATM============\n");
	printf("1. Check Balance\n");
	printf("2. Withdraw\n");
	printf("3. Deposit\n");
	printf("4. Exit\n");
}

void erromsg()
{
	printf("Invalid Option\n");
}

void checkbalance(float balance)
{
	printf("Your Balance is %.2f\n",balance);
}

void withdraw(float balance)
{
	FILE*fpointer;
	fpointer=fopen("balance.txt","w");

	float amount;
	bool back=true;
	while(back)
	{
	printf("Enter the amount to withdraw: ");
	scanf("%f",&amount);
	if(amount>balance)
	{
		printf("Insufficient Balance\n");
	}
	else
	{
		balance=balance-amount;
		printf("Please collect your cash\n");
		printf("Your Balance is %.2f\n",balance);
		back=false;
	}
	}

	
	
	fprintf(fpointer,"%.2f",balance);
	fclose(fpointer);
}

void deposit(float balance)
{
	FILE*fpointer;
	fpointer=fopen("balance.txt","w");
	
	float amount;
	printf("Enter the amount to deposit: ");
	scanf("%f",&amount);
	balance=balance+amount;
	printf("Your Balance is %.2f\n",balance);

	
	fprintf(fpointer,"%.2f",balance);
	fclose(fpointer);
}

void menuexit()
{   system("CLS");
	printf("take your recipt\n");
	printf("THANK YOU!\n");
}
 