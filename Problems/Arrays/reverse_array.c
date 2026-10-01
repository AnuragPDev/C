#include <stdio.h>
int main(){
char array[]= {1,2,3,4,5,6};

int len =sizeof(array)/sizeof(array[0]);
printf("%zu \n",sizeof(array));
printf("%zu \n",sizeof(array[0]));
//reverse array 
for (int i=len-1 ;i>=0;i--){
printf("%d " ,array[i]);
}

	return 0;
}
