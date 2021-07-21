#include<stdio.h>
#include<string.h>

#define MAX_NUM 10

int main(void) {
    char word[MAX_NUM+1] = {0};
    int i, wordLen;
    char tmp;

    printf("%d글자 이하의 단어를 입력하세요.", MAX_NUM);
    scanf("%s", word);

    printf("입력한 단어:%s\n", word);
    wordLen = strlen(word);

    for(i=0; i<wordLen/2; i++) {
        tmp = word[i];
        word[i] = word[wordLen-1-i];
        word[wordLen-1-i] = tmp;
    }

    printf("뒤집은 단어:%s\n", word);

    return 0;
}