#include <stdio.h>
int main(){
// pyramid 

// rows 
int i ,j,k;

for(i =0 ;i<5;i++){

// print blank
for (j =4 ;j>i;j--){
printf(" ");

}	
// star

for (k=0 ;k<2*i+1;k++){


printf("*");
}
printf("\n");

}

return 0;
}
