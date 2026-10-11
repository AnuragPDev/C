 #include <stdio.h>
#include <string.h>
int main(){
char  name[]="hello";
char rev[sizeof(name)];

int i =strlen(name)-1;
int j =0 ;

while(i>=0){
rev[j]= name[i];
j++;
i--;

}
rev[j]='\0';
if (strcmp(rev,name)==0){

printf("Is Pallindrome");

}
else {printf("Not Pallindrome");
}	return 0;
}
