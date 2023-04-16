//
// Created by 정준호 on 2023/04/16.
//
#include <stdio.h>

int main(void) {
    double a, h;        // 밑변, 높이
    double area;

    printf("삼각형의 밑변: ");
    scanf("%lf", &a);
    printf("삼각형의 높이: ");
    scanf("%lf", &h);

    area = (a * h) / 2;
    printf("삼각형의 넓이: %lf", area);

    return 0;
}