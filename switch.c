#include <stdio.h> 

int main(){
// switch is the alternative for multiple if else 

int day =0;
printf("Enter the day of week\n");
scanf("%d",&day);

switch(day){
	case 1: printf("Sunday\n");break;
	case 2: printf("Monday\n");break;
	case 3: printf("Tuesday\n");break;
	case 4: printf("Wednesday\n");break;
	case 5: printf("Thursday\n");break;
	case 6: printf("Friday\n");break;
	case 7: printf("Saturday\n");break;
	default:printf("Enter the number between 1 and 7\n");

}


	return 0;}

