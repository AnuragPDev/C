#include <stdio.h>
#include <unistd.h>
int main(){

for (int i =10 ; i>=0;i--){
sleep(1);                         //in seconds
	printf("%d\n", i);
}

printf("happy new year");
	return 0;
}
