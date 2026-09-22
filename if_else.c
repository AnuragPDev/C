#include <stdio.h>
#include <string.h>
int main(){
	char name[55]="";

	printf("Enter your name:");
	fgets(name,sizeof(name),stdin);
name[strlen(name)-1]='\0';
	if(strlen(name)==0){
		printf("You didnot enter your name");}
	else {
	printf("Hello %s", name);

	}
	return 0;
}
