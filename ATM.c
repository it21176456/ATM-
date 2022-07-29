#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

void mainmenu();
void erromsg();
void checkbalance(float balance);
int main()
{
	int option;
	
	bool again=true;

	FILE*fpointer;
	fpointer=fopen("balance.txt","r");
	float balance;

	if(fpointer==NULL)
	{
		printf("Error! File not found!");
		return -1;
	}

	else
	{
		fscanf(fpointer,"%f",&balance);
		fclose(fpointer);
	}

	checkbalance(balance);
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