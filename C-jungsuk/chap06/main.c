#include<stdio.h>

int multiply(int x, int y);
int getUserInput(void);
void printGugudan(int dan);
void printGugudanAll(void);

int main(void) {
    int dan = getUserInput();

    if(2 <= dan && dan <= 9) {
        printGugudan(dan);
    }
    else {
        printGugudanAll();
    }

    return 0;
}