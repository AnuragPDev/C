#include <stdio.h>
// function prototype
int add(int a , int b);


int main(){
	
int num1=0,num2=0;
printf("Enter the first num: ");
scanf("%d",&num1);
printf("Enter the second num: ");
scanf("%d",&num2);
int result = add(num1 ,num2);
printf("The sum is: %d\n", result);


	return 0;
}
int add (int a , int b){
return a+b;
}
