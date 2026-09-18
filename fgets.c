#include <stdio.h>
int main(){
// scanf dont take space value in strings it treats space as end of the string  
// we use fgets which read the strings from the buffer
char name[55]="";
printf("Enter Your name:\n");
fgets(name,55, stdin);
printf("Hello,%s\n",name);
return 0;
}
