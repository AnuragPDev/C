#include <stdio.h>

int main(){
// Array of strings
char fruits [][10]={"Apple", "Mango", "Banana","Lemon","Pineapple"};
int len= sizeof(fruits)/sizeof(fruits[0]);
// display the array elements

for (int i =0 ; i<len ;i++){

printf("%s\n",fruits[i]);
}


	return 0;
}
