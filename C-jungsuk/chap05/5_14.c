#include<stdio.h>
#include<string.h>

int main(void) {
    char str[] = "Hello";
    int LEN = sizeof(str) / sizeof(str[0]);
    int i;

    printf("%s\n", str);

    strcpy(str, "12345");
    printf("%s\n", str);

    str[2] = '\0';
    printf("%s\n", str);

    for(i=0; i<LEN; i++) {
        printf("str[%d]=%c, %d\n", i, str[i], str[i]);
    }

    return 0;
}