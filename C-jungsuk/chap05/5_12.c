#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int number[10];
    int counter[10] = {0};
    const int LEN = sizeof(number) / sizeof(number[0]);
    int i;

    srand((unsigned)time(NULL));

    for(i=0; i<LEN; i++) {
        number[i] = rand() % 10;
        printf("%d", number[i]);
    }
    printf("\n");

    for(i=0; i<LEN; i++) {
        counter[number[i]]++;
    }

    for(i=0; i<LEN; i++) {
        printf("%d의 개수 : %d\n", i, counter[i]);
    }

    return 0;
}