#include <stdio.h>

int main(void) {
	int T, X, Y;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &X, &Y);
		if (X < Y) {
			printf("%d\n", Y - X);
		} else {
			printf("0\n");
		}
	}
	return 0;
}
