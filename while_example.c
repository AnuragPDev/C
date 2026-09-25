#include <stdio.h>
#include <string.h>

int main(){
// take user name as input 
// declare the name variable to store value by taking user input
 char name[55]="";
 printf("enter your name: ");
 // fgets() used to take sentence 
 fgets(name, sizeof(name),stdin);

 // fgets store \n new line character while taking the input so lets remove it
// we need to set last new line character to null character 
name[strlen(name)-1] ='\0';
// check if user enter the name 
while(strlen(name)==0)
{
printf("Name cannot we empty! Please enter your name: ");
fgets(name, sizeof(name),stdin);
name[strlen(name)-1] ='\0';
}
printf("Hello %s \n",name);

return 0;
}
