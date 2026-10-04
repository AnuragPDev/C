#include <stdio.h>

typedef enum {
    FAIL,
    PASS,
    DISTINCTION
} Result;

int main() {
    int marks;
    Result result;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 40) {
        result = FAIL;
    }
    else if (marks < 75) {
        result = PASS;
    }
    else {
        result = DISTINCTION;
    }

    if (result == FAIL) {
        printf("Result: FAIL\n");
    }
    else if (result == PASS) {
        printf("Result: PASS\n");
    }
    else {
        printf("Result: DISTINCTION\n");
    }

    return 0;
}
