#include <stdio.h>

// sometime we want our main function before the user defned function and if we run profram it i will show error because compiler dont know about function and when it reach to calling the funtion it will throw error 
int add (int num1, int num2);// funtion prototype
int main(){

	int result =add(2,3);// add two number
printf("%d\n",result);
	return 0;
}
int add(int num1 , int num2){
return num1+num2;

}
