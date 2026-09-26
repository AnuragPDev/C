#include <stdio.h>

int main(){
// nested loop when we create loop inside another loop 

// the inner loop complete all its iteration for every single iteration of the outer loop

//lets print 1,2,3,4,5 5 times 


	//outer loop (no. of times we want to print
	for(int i =0 ;i<5;i++){

// inner loop (what to print )
        for(int j =1 ;j<=10;j++){

	printf("%4d",j);

	}
	// for space everytime innner loop completed 
	printf("\n");
	}
	return 0;
}
