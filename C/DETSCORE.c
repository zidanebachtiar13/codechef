#include <stdio.h>

int main(void) {
	int T, X, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &X, &N);
		printf("%d\n", X / 10 * N);
	}
	return 0;
}
