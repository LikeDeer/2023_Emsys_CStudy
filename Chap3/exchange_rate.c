//
// Created by 정준호 on 2023/04/16.
//
/* 환율을 계산하는 프로그램 */
#include <stdio.h>

int main(void) {
    double rate;     // 환율
    int won;        // 원화
    double result;   // 환전 결과

    printf("환율을 입력하시오: ");
    scanf("%lf", &rate);

    printf("원화 금액을 입력하시오: ");
    scanf("%d", &won);

    result = won / rate;
    printf("원화 %d원은 %lf달러입니다.\n", won, result);

    return 0;
}