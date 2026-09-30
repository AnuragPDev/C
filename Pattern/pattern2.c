#include <stdio.h>
int main(){

// print square

int side=0;

printf("Enter the side of square: ");
scanf("%d", &side);

for (int i =0 ;i < side; i++){
for (int j =0 ;j<side; j++){
printf("* ");

}
printf("\n");
}



	return 0;
}
