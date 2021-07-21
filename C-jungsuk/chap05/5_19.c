#include<stdio.h>

int main(void) {
    const char hex[] = "0123456789ABCDEF";

    int num;

    printf("정수를 입력하세요.>");
    scanf("%d", &num);

    while(num) {
        printf("%10d...%2d %c\n", num/16, num%16, hex[num%16]);
        num /= 16;
    }

    return 0;
}