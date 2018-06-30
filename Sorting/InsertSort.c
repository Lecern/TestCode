//
// Created by gaozh on 2018/6/30.
//
#include <stdio.h>

int InsertSort(int array[], int length) {
    if (length < 0)
        return 0;
    int p = array[0];
    for (int i = 1; i < length; i++) {
        int j;
        int temp = array[i];
        for (j = i; j > 0 && array[j-1] > temp ; j--) {
            array[j] = array[j-1];
        }
        array[j] = temp;
    }
    return 1;
}