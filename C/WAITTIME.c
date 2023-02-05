#include <stdio.h>

int main(void) {
	int T, K, X;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &K, &X);
		printf("%d\n", K * 7 - X);
	}
	return 0;
}
