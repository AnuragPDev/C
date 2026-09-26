# include <stdio.h>
int main(){
//continue skips the current iteration

	for (int i =1 ; i<=10;i++){

// let say we dont want to print number which is even  
if(i%2==0){


	continue;
}
printf("%d\n",i);

	}
	return 0;
}

