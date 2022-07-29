#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

void mainmenu();
void erromsg();

int main()
{
	int option;
	
	bool again=true;

	while(again)
	{
		mainmenu();
		scanf("%d",&option);

		switch(option)
		{
			case 1:
			system("cls");
				balance();
				break;
			case 2:
			system("cls");
				withdraw();
				break;
			case 3:
			system("cls");
				deposit();
				break;
			case 4:
			system("cls");
				menuexit();
				return 0;
			default:
			    erromsg();
				break;
		}
	}
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