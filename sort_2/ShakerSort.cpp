#include "ShakerSort.h"
template <typename T> void shaker_sort(T* array, int c) {
	bool flag = true;
	int start = 0;
	int end = c - 1;
	while (flag) {
		flag = false;
		for (int i = start; i < end; ++i) {
			if (array[i] > array[i + 1]) {
				int copy = array[i];
				array[i] = array[i + 1];
				array[i + 1] = copy;
				flag = true;
			}
		}
		if (!flag)
			break;
		flag = false;
		--end;
		for (int i = end - 1; i >= start; --i) {
			if (array[i] > array[i + 1]) {
				int copy = array[i];
				array[i] = array[i + 1];
				array[i + 1] = copy;
				flag = true;
			}
		}
		++start;
	}
}