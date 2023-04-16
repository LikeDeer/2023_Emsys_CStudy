//
// Created by 정준호 on 2023/04/16.
//
#include <stdio.h>

int main(void) {
    double x;
    double result;

    printf("실수를 입력하세요: ");
    scanf("%lf", &x);

    result = (3 * x * x) + (7 * x) + 11;
    printf("다항식의 값은 %lf\n", result);
}