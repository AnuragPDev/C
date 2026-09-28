#include <stdio.h>
int main(){
// 2d Array : An array where each element is an array
// array[][]={{],{},{}}

int numbers[][3]={{1,2,3},
	         {4,5,6}, 
		 {7,8,9}}
;

//print two d array elements 
printf("%d ",numbers[0][0]);//row 1 col 1
printf("%d ",numbers[0][1]);
printf("%d\n",numbers[0][2]);

printf("%d ",numbers[1][0]);//row 2 col 1
printf("%d ",numbers[1][1]);
printf("%d\n",numbers[1][2]);

printf("%d ",numbers[2][0]);//row 3 col 1
printf("%d ",numbers[2][1]);
printf("%d\n",numbers[2][2]);



	return 0;
}
