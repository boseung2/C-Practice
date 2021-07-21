#include<stdio.h>

int main(void) {
    char ch;
    int i;
    float f;
    double d;

    char* pch = &ch;
    int* pi = &i;
    float* pf = &f;
    double* pd = &d;

    printf("sizeof(pch) = %lu\n", sizeof(pch));
    printf("sizeof(pi) = %lu\n", sizeof(pi));
    printf("sizeof(pf) = %lu\n", sizeof(pf));
    printf("sizeof(pd) = %lu\n", sizeof(pd));
    puts("");
    printf("sizeof(*pch)=%lu\n", sizeof(*pch));
    printf("sizeof(*pi) = %lu\n", sizeof(*pi));
    printf("sizeof(*pf) = %lu\n", sizeof(*pf));
    printf("sizeof(*pd) = %lu\n", sizeof(*pd));

    return 0;
}