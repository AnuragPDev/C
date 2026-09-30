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

printf("==========QUIZ-GAME===========\n");

for(int i=0 ; i<questionCount;i++){
printf("\n%s\n", questions[i]);
printf("\n%s\n",options[i]);
printf("Enter your choice: ");
scanf(" %c",&user_guess);
if(user_guess ==answerKey[i]){
score+=1;
}


}

printf("Your Score is %d/5\n",score);



	




	return 0;
	}

