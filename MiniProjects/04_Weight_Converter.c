#include <stdio.h>
int main(){
	int choice =0;
	float kilogram=0.0f;
	float pound =0.0f;

 printf("Welcome to the weight converter\n");
 printf("1. Kilogram to Pounds\n");
 printf("2. Pounds to Kilogram\n");
 printf("Enter your choice(1 or 2)");
scanf("%d", &choice);
if (choice==1){
// Kg to pounds 

printf("Enter the weight in Kg: ");
scanf("%f",&kilogram);
pound =kilogram * 2.20462;
printf("%.2f Kilogram is equal to: %.2f pounds\n", kilogram, pound);

}


else if  (choice ==2){
//Pounds to Kg 
printf("Enter the weight in Pound: ");
scanf("%f",&pound);
kilogram = pound / 2.20462;
printf("%.2f Pound is equal to: %.2f Kilogram\n", pound, kilogram);

}
else {
	printf("Enter a valid choice 1 or 2 \n");
}
 
	return 0;
}
