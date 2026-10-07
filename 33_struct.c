#include <stdio.h>
#include <string.h>
// struct helps us to group the different data type to a same relatable object 


// define the struct
struct Student {
char name [30];
int age ;
float marks ;
};





int main(){
// initialise the struct 
// 1 way
struct Student s1={"Peter Griffin",23,33.3};
printf("%s\n", s1.name);
printf("%d\n" ,s1.age);
printf("%.2f\n" ,s1.marks);

// 2nd way initialise one by one 

struct Student s2 ;
strcpy(s2.name,"Rahul Mirza");
s2.age =23;
s2.marks=44.2;

printf("%s\n", s2.name);
printf("%d\n" ,s2.age);
printf("%.2f\n" ,s2.marks);


return 0;
}
