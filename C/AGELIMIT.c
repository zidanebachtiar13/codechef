#include <stdio.h>

int main(void) {
	int T, X, Y, A;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &X, &Y, &A);
		if (A >= X && A < Y) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
