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
        //这里j的取值范围是length-1-i是因为length-1已经是队伍末尾, 但从后往前i个都是已经有序的, 无需再排
        //每趟排序都会将最大的放到最后
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