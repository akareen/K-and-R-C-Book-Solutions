#include <stdio.h>

int rightroot(int x, int n);

int main() {
	int num = 100;
	num = rightroot(num, 2);
	printf("%d\n", num);
}

int rightroot(int x, int n) {
	return x >> n;
}
