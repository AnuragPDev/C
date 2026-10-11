#include <stdio.h>
#include <string.h>
int main(){
char name[]="Anurag";
//using strlen()
//int len= strlen(name);
//printf("%d\n",len);


//using loop
int count=0,i  =0;
while(name[i]!='\0'){
count++;
i++;

}
printf("%d\n",count);
	return 0;
}
