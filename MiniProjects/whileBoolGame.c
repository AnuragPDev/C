#include <stdio.h>
#include <stdbool.h>

int main(){
bool isRunning=true;
char response='\0';


while(isRunning){

printf("Your game is running\n");
printf("Would you like to continue the game ? Y/n: ");
scanf(" %c",&response);
if(response == 'N' || response == 'n')
	isRunning=false;
}
printf("You exit the game\n");
	return 0;
}
