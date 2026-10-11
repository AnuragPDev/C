#include <stdio.h>
int main(){
char name[]="Rishabh";
int i =0 ,count=0;

while(name[i]!='\0'){
switch(name[i]){
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'o':
	case 'O':
	case 'u':
	case 'U':count++; break;
}
i++;
		}
printf("%d\n",count);

	return 0;
}
