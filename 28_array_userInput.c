#include <stdio.h>
#include <string.h>
int main(){
//EXERCISE

	char names[4][25]={0};
	// Enter the names 
for (int i =0 ; i < 4 ;i++){

printf("Enter a names: ");
fgets(names[i],sizeof(names[i]),stdin);
names[i][strlen(names[i])-1] ='\0';

}
// print array element 
for (int i =0 ; i < 4 ;i++){
printf("%s ",names[i]);
}

return 0;

}
