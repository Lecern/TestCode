//
// Created by gaozh on 2018/6/30.
//

#include <stdio.h>

int BubbleSort(int array[], int length) {
    if (length < 0 ){
        printf("Error");
        return 0;
    }
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
//                swap(array[j], array[j + 1]);
            }
        }
    }
    return 1;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}