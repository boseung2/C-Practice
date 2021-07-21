#include<stdio.h>

double slow_power(double x ,int n) {
    int i;
    double result = 1.0;

    for(i=0; i<n; i++) {
        result = result * x;
    }

    return result;
}

double power(double x, int n) {
    if(n==0) {
        return 1;
    }
    else if((n % 2) == 0) {
        return power(x*x, n/2); 
    }
    else {
        return x * power(x*x, (n-1)/2);
    }
}

int main(void) {
    double result = power(2, 5);
    printf("result : %.0f", result);

    return 0;
}