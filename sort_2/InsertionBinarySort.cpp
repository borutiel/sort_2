#include "InsertionBinarySort.h"
template <typename T> void binarySearch(T* array[], int elem, int low, int high)
{
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (elem == array[mid]) {
            return mid + 1;
        }
        else if (elem > array[mid]) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return low;
}

template <typename T> void InsertionBinarySort(T* array[], int c)
{
    for (int i = 1; i < c; ++i) {
        int elem = array[i];
        int j = i - 1;
        int loc = binarySearch(array, elem, 0, j);

        while (j >= loc) {
            array[j + 1] = array[j];
            --j;
        }

        array[j + 1] = elem;
    }


}