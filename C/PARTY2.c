#include <stdio.h>

int main(void) {
	int T, N, X, K;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &N, &X, &K);
		if (N * X <= K) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
