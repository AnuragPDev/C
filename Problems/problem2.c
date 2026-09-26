//Take a person's age and print:
//Child if < 13
//Teenager if 13–19
//Adult if 20+

#include <stdio.h>

int main(){
	int age =0;
	printf("Enter your age: ");
	scanf("%d",&age);

	if (age>=20){
		printf("Adult\n");
	}
	else if (age <13){
printf("Child\n");
	}
	else {
		printf("Teenager\n");}
	return 0;
}
