#include <stdio.h>

int main(){
// ticket price 
// 10 % discount for students
// 20 % discount for senior citizen
// 10+20 % dicount for students + senior 

float price =10.00;
bool isStudent=false;
bool isSenior =false;

//students $9
//senior $8
//both $7
//none $10
	if(isStudent){
		if(isSenior){
			printf("You got senior discount of 20%\n");
			printf("You got student discount of 10%\n");
			price*=0.7;}
		else {
		printf("You got student discount of 10%\n");
		price*=1.9;}
	             }
	else { 
		if(isSenior){
                        printf("You got senior discount of 20%\n");
                        price*=0.8;}
	     }
	
printf("The price of the ticket is: $%.2f\n",price);
return 0;
}
