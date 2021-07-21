#include<stdio.h>

int main(void) {
    int i = 5;
    int* p = &i;

    printf("i = %d\n", i);
    printf("&i=%p\n", &i);
    printf("p = %p\n", p);
    printf("&p=%p\n", &p);

    return 0;
}