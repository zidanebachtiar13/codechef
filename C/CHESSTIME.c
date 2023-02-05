#include <stdio.h>

int main(void) {
	int T, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		printf("%d\n", N * 3);
	}
	return 0;
}
