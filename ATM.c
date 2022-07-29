#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void erromsg();
void mainmenu();
void menuexit();
void checkbalance(float balance);
float moneydeposit(float balance);
float moneywithdraw(float balance);

int main()
{
	int op,choose  ;
	float balance = 15000.00 ;
	bool again=true;
	
	while(again)
	{
		mainmenu();
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
			system("CLS");
			checkbalance(balance);
			break;
			
		case 2:
			system("CLS");
			balance=moneydeposit(balance);
			break;
		case 3:
		    system("CLS");
		    balance=moneywithdraw(balance);
		    break;
		case 4:
			system("CLS");
			menuexit();
			return 0;
		default :
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
	
	
		        
				
		    
	}
	
	return 0;
}
void mainmenu()
{   
    printf("====HELLO===\n");
    printf("====GOOD MORNING====\n");
    printf("$$$ SAMPATH ATM MACHINE $$$\n");
	printf("main menu \n");
	printf("<1>check balance\n");
	printf("<2>deposit\n");
	printf("<3>witdraw\n");
	printf("<4>exit\n");
}
void checkbalance(float balance)
{
	printf("your bank balance is= %.2f\n",balance);
	
}
void menuexit()
{   system("CLS");
	printf("take your recipt\n");
	printf("THANK YOU!\n");
}
float moneydeposit(float balance)
{
	float deposit;
	printf("enter your amount= \n");
	scanf("%f",&deposit);
	printf("your deposited money is = %.2f\n",deposit);
	
	balance+=deposit;
	printf("your new bank balance is = %.2f\n",balance);
	
	return balance;
	
}

float moneywithdraw(float balance)
{   
float withdraw;
    bool back=true;
    while(back)
    {   
    		printf("enteryour amount= \n");
	scanf("%f",&withdraw);
	if(balance>withdraw)
	{
	printf("your withdrawal amount is = %.2f\n",withdraw);
	
	balance-=withdraw;
	printf("your bank balance is = %.2f\n",balance);
	
	back=false;
		
	}
	else 
	{
		printf("==you don't have enough money==\n");
		printf("your bank balance is = %.2f \n",balance);
	}
	}

	return balance;
	
}



void erromsg()
{
	printf("++++++ you selected invalid number ++++++\n");
}


