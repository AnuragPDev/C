#include <stdio.h>
int main(){
char name[]="Hello 123!";
int i =0 ,countVow=0,countCon=0;

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
        case 'U':countVow++; break;
	default:countCon++;
}
i++;
                }
printf("Vowels are:%d\n",countVow);
printf("Consonents  are:%d\n",countCon);

        return 0;
}

