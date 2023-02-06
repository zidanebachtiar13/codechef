#include <stdio.h>

int main(void) {
	int T, X, P, Q;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &X, &P, &Q);
		printf("%d\n", (P - Q) * X);
	}
	return 0;
}
