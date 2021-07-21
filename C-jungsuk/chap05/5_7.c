#include<stdio.h>

int main(void) {
    int score[] = {79, 88, 91, 33, 100, 55, 95};

    int max = score[0];
    int min = score[0];

    const int LEN = sizeof(score) / sizeof(score[0]);
    int i;

    for(i=1; i<LEN; i++) {
        if(score[i] > max) max = score[i];
        else if(score[i] < min) min = score[i];
    }

    printf("최대값 : %d\n", max);
    printf("최소값 : %d\n", min);
}