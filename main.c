//
// Created by Jerry on 2017/6/20 0020.
//


#include <stdio.h>
int BubbleSort(int array[], int length);

int InsertSort(int array[], int length);

void main () {
    int array[] = {8,5,7,66,31,20,-9,0,-987};
    int length = (int) sizeof(array) / sizeof(*array);
//    BubbleSort(array, length);
    InsertSort(array, length);
    for (int i = 0; i < length; ++i) {
        printf("%d,", array[i]);
    }
 }


