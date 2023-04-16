//
// Created by 정준호 on 2023/04/16.
//
#include <stdio.h>

int main(void) {
    double f, c;        // 화씨, 섭씨

    printf("화씨값을 입력하시오: ");
    scanf("%lf", &f);

    c = (f - 32) * 5 / 9;
    printf("섭씨값은 %lf도입니다.", c);
}