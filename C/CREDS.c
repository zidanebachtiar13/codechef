#include <stdio.h>

int main(void) {
	int T, X, Y, Z;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &X, &Y, &Z);
		printf("%d\n", X * 4 + Y * 2);
	}
	return 0;
}
