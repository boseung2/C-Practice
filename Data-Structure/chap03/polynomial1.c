#include<stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MAX_DEGREE 101
typedef struct {
    int degree;
    float coef[MAX_DEGREE];
} polynomial;

// C = A + B 여기서 A와 B는 다항식이다. 구조체가 반환된다.
polynomial poly_add1(polynomial A, polynomial B) {
    polynomial C;                       // 결과 다항식
    int Apos = 0, Bpos = 0, Cpos = 0;   // 배열 인덱스 변수
    int degree_a = A.degree;
    int degree_b = B.degree;
    C.degree = MAX(A.degree, B.degree); // 결과 다항식 차수

    while(Apos <= A.degree && Bpos <= B.degree) {
        
    }
}