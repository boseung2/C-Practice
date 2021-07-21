#include<stdio.h>

void changeX(char** px) {
    *px = "ZZZ";
}

int main(void) {
    char* x = "AAA";

    printf("x=%s\n", x);
    changeX(&x);
    printf("x=%s\n", x);

    return 0;
}