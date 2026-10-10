#include <stdio.h>

int main(){
int num,original,digit ;
printf("Enter a number: ");
scanf("%d",&num);
original =num;
int reverse=0;
while(num!=0){
digit=num%10;
reverse = reverse*10+digit;
num=num/10;


}
if(reverse==original){
printf("Is pallindrome");
}

else {
printf("Not a paliindrome");
}

	return 0;
}
