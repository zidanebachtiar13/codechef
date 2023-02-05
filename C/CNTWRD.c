#include <stdio.h>

int main(void) {
	int T, N, M;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		printf("%d\n", N * M);
	}
	return 0;
}
