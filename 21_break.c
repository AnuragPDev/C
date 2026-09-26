#include <stdio.h>

int main(){

	// break is used to break the iteration or stop the loop 
	
	for(int i =1 ;i <=10 ; i++){
// let say we want to exit loop when a condition is staisfed like i==5
        if(i==5){
		break;
	}
	else {
		printf("%d\n",i);
	}


	}

		return 0;
}
