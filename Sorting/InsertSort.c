//
// Created by gaozh on 2018/6/30.
//
#include <stdio.h>

int InsertSort(int array[], int length) {
    if (length < 0)
        return 0;
    int p = array[0];
    for (int i = 1; i < length; i++) {
        int temp = array[i];
        for (int j = i; j > 0 && array[j-1] > array[i] ; j--) {
            array[j] = array[j-1];
            array[j-1] = temp;
        }
    }
    return 1;
}