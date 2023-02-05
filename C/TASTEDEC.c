#include <stdio.h>

int main(void) {
	int T, X, Y;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &X, &Y);
		if (X * 2 > Y * 5) {
			printf("Chocolate\n");
		} else if (X * 2 < Y * 5) {
			printf("Candy\n");
		} else if (X * 2 == Y * 5) {
			printf("Either\n");
		}
	}
	return 0;
}
