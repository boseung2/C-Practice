#include<stdio.h>

int sumArr(int arr[], int len);
void printArr(int arr[], int len);
int maxArr(int arr[], int len);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    const int LEN = sizeof(arr) / sizeof(arr[0]);

    int sum = sumArr(arr, LEN);
    int max = maxArr(arr, LEN);

    printArr(arr, LEN);
    printf("sum=%d\n", sum);
    printf("max=%d\n", max);
    return 0;
}

int sumArr(int arr[], int len) {
    int sum = 0;

    while(len--) {
        sum += *arr++;
    }

    return sum;
}

void printArr(int arr[], int len) {
    int i;

    for(i=0; i<len; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}

int maxArr(int arr[], int len) {
    int max = *arr++;

    while(len--) {
        max = (*arr++ > max) ? *arr : max;
    }

    return max;
}