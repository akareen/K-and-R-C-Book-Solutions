#include <stdio.h>

int invert(int x, int p, int n);

int main() {
	int num = 150;
	num = invert(num, 3, 3);
	printf("%d\n", num);
}

int invert(int x, int p, int n) {
	for (int i = 0; i < n; i++)
		x = x & ~p - i;
	return x;
}