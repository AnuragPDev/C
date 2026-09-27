// banking program


#include <stdio.h>

// funtion prototype
void checkBalance(float balance,char currency);
void depositMoney();
void withdrawMoney();
void mainScreen();


int main(){
	float balance =0.0f;
	char currency='$';
	int choice=0;
	mainScreen();

	
do{
printf("Enter Your choice: ");
scanf("%d",&choice);

switch(choice){
	case 1: checkBalance(balance,currency);break;
	case 2 :depositMoney();break;
	case 3 :withdrawMoney();break;
        case 4 :printf("Thank You To Visiting Us\n");break;
        default:printf("Please enter a valid option\n");}
}
while(choice !=4);

return 0;}



// welcome window
void mainScreen(){
printf("============Banking Application============\n");
printf("1. Check Balance                         ==\n");
printf("2. Deposite Money                        ==\n");
printf("3. Withdraw Money                        ==\n");
printf("4. Exit                                  ==\n");
printf("===========================================\n");
}


void checkBalance(float bal,char currency){

printf("Your current balance is %c%.2lf\n",currency,bal);
}


void depositMoney(){
	
printf("Money Deposited\n");
}



void withdrawMoney(){
printf("Money Withdraw");
}

