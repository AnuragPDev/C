#include <stdio.h>
#include <stdbool.h>
// we need std headerfile for boolean
// we use boolean for true and false value 
int main(){
char name[33];
bool isOnline =true;
bool isMarried =0;
scanf("%s",name);
printf("Hello %s Your online status is %d\n" , name,isOnline);
 if(isOnline){
 printf("You are ONLINE!\n");
 }

 else {
printf("You are OFFLINE!");


 }
return 0;
}
