#include <stdio.h>

int main() {

}

int binarySearch(int value, int array[], int len) {
	int low = 0;
	int high = len - 1;
	int mid, foundVal;
	while (low <= high) {
		mid = (low + high) / 2;
		foundVal = array[mid];
		if (foundVal == value)
			return mid;

		if (foundVal > value)
			high = mid + 1;
		else
			low = mid + 1;
	}
	return -1;
}