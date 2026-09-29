#include <stdio.h>
#include <string.h>


int option=0;
int main(){
int score =0;
char playerName[55]="";
char user_guess='\0';


//questions 
char questions[][100]={
"Which symbol is used to end a statement in C?",
"Which format specifier is used to print an integer using printf()?",
"Which of these is used to store a single character in C?",
"What is the first index of an array in C?",
"Which function is commonly used to read a line of text from the user in C?"};

// Options
char options[][100]={
"A) :\nB) ;\nC) .\nD) ,",
"A) %c\nB) %f\nC) %d\nD) %s",
"A) char\nB) string\nC) character\nD) text",
"A) 0\nB) 1\nC) -1\nD) depends",
"A) printf()\nB) scanf()\nC) fgets()\nD) puts()"
};

// answer keys
char answerKey[]= {'B', 'C', 'A', 'A', 'C'};

int questionCount=sizeof(questions)/sizeof(questions[0]);
do{

printf("Welcome To Quiz\n");
printf("Press 1 to start the quiz and 0 to exit the game\n");
scanf("%d",&option);


if (option==1){



printf("Game start"); 

}

	

else if (option==0){

	printf("Thanks for playing\n");
}
else{
printf("Enter the valid Option");
}
}
while(option !=0);




//printf("%s\n", questions[0]);
//printf("%s\n",options[0]);
//printf(%c\n",answerKey[0]);

	return 0;




}
