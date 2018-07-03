//
// Created by gaozh on 2018/7/3.
//

int QuickSort(int array[], int left, int right) {
    if (left > right) return 0;
    int pivot = array[left];
    int i = left, j = right;
    while (i < j) {
        while (array[j] >= pivot && i < j) j--;
        while (array[i] <= pivot && i < j) i++;
        if (i < j) {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
        array[left] = array[i];
        array[i] = pivot;

        QuickSort(array, left, i - 1);
        QuickSort(array, i + 1, right);
    }
}
