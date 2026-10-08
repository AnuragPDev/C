#include <stdio.h>
#include <string.h>
// declare car structre
typedef struct {
char color[30];
char brand[30];
int year;
float price;


}Car;




int main(){
Car c1, c2,c3;
//c1
strcpy(c1.brand , "Mahindra");
strcpy(c1.color , "Black");
c1.year=2022;
c1.price= 22.3;


strcpy(c2.brand , "Volkswagen");
strcpy(c2.color , "Black");
c2.year=2020;
c2.price= 15.66;

strcpy(c3.brand , "Skoda");
strcpy(c3.color , "Red");
c3.year=2018;
c3.price= 14.55;


printf("%s\n",c1.brand);
printf("%s\n",c1.color);
printf("%d\n",c1.year);
printf("%.2f\n",c1.price);

printf("%s\n",c2.brand);
printf("%s\n",c2.color);
printf("%d\n",c2.year);
printf("%.2f\n",c2.price);

printf("%s\n",c3.brand);
printf("%s\n",c3.color);
printf("%d\n",c3.year);
printf("%.2f\n",c3.price);


	return 0;
}
