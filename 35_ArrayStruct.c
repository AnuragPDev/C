#include <string.h>
#include <stdio.h>


typedef struct Car{
char brand[25];
int year ;
int price;
}Car;




int main(){


Car c1={"Mustang",2004,320000};
Car c2={"Ferrari" ,2023,100000};
Car c3 ={"Lamborghini" ,2022,200000};
Car cars[]={c1,c2,c3};

int number= sizeof(cars)/sizeof(cars[0]);

for(int i =0 ;i<number;i++){
printf("%s %d $%d\n",cars[i].brand,cars[i].year,cars[i].price);
}
// array of structs= Array where each element contains a struct{}
// helps organise and groups together related data 


	return 0;
	
}
