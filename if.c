#include  <stdio.h>

int main(){
// if else is a conditional statemnt and used to check multiple conditions
int age =0;
	printf("Enetr your age:");

	scanf("%d",&age);
// program to check who is our candidate 

	if (age>=18){
		printf("You are an adult\n");
	}
	else if (age ==0){
		printf("You are a newborn \n");

	}
	else if (age <0){
		printf("You haven't been born yet");
	}
	else {
printf("You are a child\n");
	}
	return 0;
}
