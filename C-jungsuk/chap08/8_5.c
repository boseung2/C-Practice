#include<stdio.h>

void swapStr(char** str1, char** str2) {
    char* tmp;

    tmp = *str1;
    *str1 = *str2;
    *str2 = tmp;

}

int main(void) {
    char* str1 = "ABC";
    char* str2 = "123";

    printf("str1=%s, str2=%s\n", str1, str2);

    swapStr(&str1, &str2);

    printf("str1=%s, str2=%s\n", str1, str2);

    return 0;
}