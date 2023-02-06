#include <stdio.h>

int main(void) {
	int T, X;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &X);
		if (X > 300) {
			printf("%d\n", X * 10);
		} else {
			printf("3000\n");
		}
	}
	return 0;
}
