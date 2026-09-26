#include <stdio.h>
#include <string.h>
// function is a block of code that perform specific task and reusable that can be invoked 
// Arguments can  be sent to a function with function calling 

//print hello Anurag 5 times 

void hello(char name[]){

printf("Hello %s\n",name);
printf("Thanks");

}



int main(){

char name[55]="";
printf("Enter your name\n");
fgets(name , sizeof(name), stdin);
name[strlen(name)-1]='\0';

hello(name);
return 0;
}

