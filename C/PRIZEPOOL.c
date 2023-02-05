#include <stdio.h>

int main(void) {
	int T, X, Y;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &X, &Y);
		printf("%d\n", X * 10 + Y * 90);
	}
	return 0;
}
