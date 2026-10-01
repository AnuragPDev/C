#include <stdio.h>
int main(){
char array[] ={1,2,3,4,5};

int len=sizeof(array)/sizeof(array[0]);
int sum =0;
for (int i =0 ; i<len ;i++){
sum+=array[i];

}
printf("%d\n",sum);
	return 0;}

