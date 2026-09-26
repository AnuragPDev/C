//Take an integer and print whether it is positive, negative, or zero.

#include <stdio.h>
int main(){
int number =0;

printf("Enter a number: ");
scanf("%d",&number);

if(number>0){
	printf("Positive Number\n");
}
else if (number <0 ){
	printf("Negative Number\n");
}
else {
	printf("Zero\n");}

	return 0;
}
