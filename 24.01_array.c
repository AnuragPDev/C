# include <stdio.h>


int main(){
 // creating an array using user input
 
int marks[6]={0};// size : 6

//fill the elements inside array

for(int i =0 ; i<6;i++){
printf("Enter the marks: ");
scanf("%d",&marks[i]);

}
	 


// display element

for(int i=0;i<6;i++){

printf("%d\n",marks[i]);
}


	return 0;

}
