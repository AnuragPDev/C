#include <stdio.h>

int main() {
    int age;
    char name[33];

    printf("Enter your name\n");
    scanf("%32s", name);

    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Your age is %d\n", age);

    return 0;
}
