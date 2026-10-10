#include <stdio.h>

int main(){
char letter;

printf("Enter the character: ");
scanf(" %c" , &letter);

switch(letter){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("Vowel");break;
	default :printf("Consonent");


}

	return 0;
}
