#include <stdio.h>
// banking program

// funtion prototype
void checkBalance(float balance);
void depositMoney();
void withdrawMoney();
void mainScreen();


int main(){
	float balance =0.0f;
	char symbol ='$';
	int choice=0;
mainScreen();
scanf("%d",&choice);
do{
switch(choice){
	case 1: checkBalance(balance);break;
	case 2 :depositMoney();break;
	case 3 :withdrawMoney();break;
        case 4 :printf("Thank You To Visiting Us\n");break;
        default:printf("Please enter a valid option\n");

}
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
printf("Enter Your choice: ");
}
void checkBalance(float bal){


}


void depositMoney(){
}

void withdrawMoney(){

}

