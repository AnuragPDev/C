#include <stdio.h>

// decleare enum

typedef enum {
PENDING,
APPROVED,
REJECTED}Status
;

int main(){

Status s= APPROVED;

if (s == APPROVED){
printf("Application is approved");

}
else if (s == PENDING){
printf("Application is pending");
}
else {

printf("Application Rejected");
}
	return 0;
}
