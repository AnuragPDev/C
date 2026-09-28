// banking program


#include <stdio.h>

// funtion prototype
void checkBalance(float balance,char currency);
float depositMoney(float balance);
float withdrawMoney(float balance);
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
	case 2 :balance=depositMoney(balance);break;
	case 3 :balance=withdrawMoney(balance);break;
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

printf("Your current balance is %c%.2f\n",currency,bal);
}


float depositMoney(float balance){
	float amount;
	printf("Enter the Amount to deposit: ");
	scanf("%f",&amount);
	balance= balance+amount;
	
printf("Money Deposited successfully\n");
return balance;
}



float  withdrawMoney(float currentBal){
	float amount;
	printf("Enter the Amount to withdraw: ");
        scanf("%f",&amount);
	if (amount>currentBal){
	printf("Insufficient funds! Your balance is %.2f\n",currentBal);
}

else if (amount<=0){
	printf("Invalid amount!\n");
}
       else {
       currentBal=currentBal-amount;
       
        printf("Money Withdraw successfully\n");}
return currentBal;
}

