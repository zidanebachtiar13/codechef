#include <stdio.h>

int main(void) {
	int T, A, B, C;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &A, &B, &C);
		printf("%d\n", C - A);
	}
	return 0;
}
