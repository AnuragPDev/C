#include <stdio.h>
// enum = A user defined data type that consists of a set
// of named integer constant 
// Benefits replace numbers with readble names 

enum Day{
SUNDAY , MONDAY , TUESDAY , WEDNESDAY, THURSDAY, FRIDAY , SATURDAY};

int main(){

enum Day today=SUNDAY;
printf("%d\n" ,today);

 if(today==SUNDAY || today==SATURDAY){

printf("Its a weekend");
 }
 else {

printf("Its a weekday");
 }
	return 0;}



