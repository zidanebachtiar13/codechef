#include <stdio.h>

int main(void) {
	int N, A, B;
	scanf("%d %d %d", &N, &A, &B);
	printf("%d %d\n", N - A, N - A - B);
	return 0;
}
