//
// Created by 정준호 on 2023/04/16.
//
#include <stdio.h>

int main(void) {
    double mile;

    printf("마일을 입력하시오: ");
    scanf("%lf", &mile);

    printf("%.1lf마일은 %lf미터 입니다.\n", mile, 1609.0 * mile);   // 형식 지정자에 주목! 출력 형식을 수정할 수 있음.

    return 0;
}