//
// Created by 정준호 on 2023/04/16.
//
#include <stdio.h>

int main(void) {
    double weight_on_earth, weight_on_moon;

    printf("몸무게를 입력하세요(단위: kg): ");
    scanf("%lf", &weight_on_earth);

    weight_on_moon = weight_on_earth * 0.17;
    printf("달에서의 몸무게는 %lfkg입니다.", weight_on_moon);

    return 0;
}