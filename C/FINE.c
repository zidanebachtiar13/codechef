#include <stdio.h>

int main(void) {
	int T, X;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &X);
		if (X <= 70) {
			printf("0\n");
		} else if (X <= 100) {
			printf("500\n");
		} else if (X > 100) {
			printf("2000\n");
		}
	}
	return 0;
}
