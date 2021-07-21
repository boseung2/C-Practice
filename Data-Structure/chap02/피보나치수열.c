#include<stdio.h>

int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return (fib(n-1) + fib(n-2));
}

int fib_iter(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    int pp = 0;
    int p = 1;
    int result = 0;

    for(int i=2; i<=n; i++) {
        result = p + pp;
        pp = p;
        p = result;
    }

    return result;
}

int main(void) {
    int result = fib_iter(6);
    printf("result : %d", result);
    
    return 0;
}