# include <stdio.h>
#include <string.h>
int main (){
char name[]= "Anurag";
int index=strlen(name)-1 ;

while(index>=0){
printf("%c",name[index]);
index--;

}

	return 0;
}
