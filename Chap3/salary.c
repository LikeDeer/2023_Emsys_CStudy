//
// Created by 정준호 on 2023/04/16.
//
/* 월 수령액을 계산하는 프로그램 */
#include <stdio.h>

int main(void) {
    int ysalary;        // 연복
    int msalary;        // 월수령액

    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%d", &ysalary);

    msalary = ysalary / 12;

    printf("월수령액(단위: 만원): %d\n", msalary);

    return 0;
}