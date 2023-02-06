#include <stdio.h>

int main(void) {
	int T, X1, Y1, X2, Y2;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
		if (X1 + Y1 > X2 + Y2) {
			printf("%d\n", X2 + Y2);
		} else {
			printf("%d\n", X1 + Y1);
		}
	}
	return 0;
}
