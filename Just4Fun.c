//
// Created by Jerry on 2017/6/22 0022.
//
#include <stdio.h>

#define Max 7

int main() {
    int count = 0;
    for (int i = Max; i >= 1; i = i - 2) {
        for (int k = 0; k <= count - 1; k++) {
            printf(" ");
        }
        count++;
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    count = 0;
    for (int i = 3; i <= Max; i = i + 2) {
        for (int k = 2; k <= Max / 2 - count; k++) {
            printf(" ");
        }
        count++;
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}