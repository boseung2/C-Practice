#include<stdio.h>

int main(void) {
    int score[] = {100, 88, 100, 100, 90};
    const int LEN = sizeof(score) / sizeof(score[0]);

    int i, sum = 0;
    float average = 0.0f;

    for(i=0; i<LEN; i++) {
        sum += score[i];
        printf("score[%d]=%d\tsum=%d\n", i, score[i], sum);
    }

    average = sum / (float)LEN;

    printf("총점 : %d\n", sum);
    printf("평균 : %4.1f\n", average);

    return 0;
}