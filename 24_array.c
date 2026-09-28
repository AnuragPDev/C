# include <stdio.h>
int main(){
// array : It is a data structure used to stor multiple value of same type 

int numbers[]={1,2,3,4,5,6};

char grades[]={'a','b','c','d'};

// accesing the elements one at a time

printf("%d ",numbers[0]);
printf("%d ",numbers[1]);
printf("%d ",numbers[2]);
printf("%d ",numbers[3]);
printf("%d ",numbers[4]);

printf("\n");

// traversing  all the element using for loop

for (int index=0;index<5;index++){
printf("%d ",numbers[index]);
}
printf("\n");


//updating element

numbers[1]=200;//update element at index 1
	   for (int index=0;index<5;index++){
printf("%d ",numbers[index]);
}
printf("\n");


// size of the array  we dont have any function to calculate size of array like in other programming languages 

printf("%d\n",sizeof(numbers));
printf("%d\n",sizeof(numbers[0]));
int array_length=sizeof(numbers)/sizeof(numbers[0]);


for (int i =0 ; i <array_length;i++){
printf("%d ",numbers[i]);
}


	return 0;
}
