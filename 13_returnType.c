#include  <stdio.h>
// return : returns the value back to the where function is called 

// return integer 

// function to return big number

int bigger(int a , int b){

	if (a>b){
		return a ;
	}
	else {
		return b;

	}
}



int main(){
int result = bigger(33,4);
printf("Bigger number is %d", result);
	return 0;
}

