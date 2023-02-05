#include <stdio.h>

int main(void) {
	int T, Y, X;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &Y, &X);
		printf("%d\n", Y - X);
	}
	return 0;
}
