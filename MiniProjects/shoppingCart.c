#include <stdio.h>
#include <string.h>
int main(){
// in this project user add the items in the cart and give us the name of items 
// quantity of items and will print name quantity and price 
//Declare all the useful variables 

	char items[50]="";
	int quantity=0;
	float price= 0.0f;
	float total=0.0f;
	char currency ='$';
        char name[55]="";

printf("What is you name: ");
fgets(name, sizeof(name),stdin);
name[strlen(name)-1]='\0';
printf("Hello %s What item would you like to buy\n",name);
// we use fgets() top take string inputs 
fgets(items, sizeof(items),stdin);
items[strlen(items)-1]='\0';
printf("What is the price of each items\n");
scanf("%f",&price);

printf("How much do you want\n");
scanf("%d",&quantity);
total = price * quantity;
printf("You bought %dx%s:%c%.2f", quantity,items, currency,total);

	 return 0;
 }
