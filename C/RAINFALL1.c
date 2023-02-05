#include <stdio.h>

int main(void) {
	int T, X;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &X);
		if (X < 3) {
			printf("LIGHT\n");
		} else if (X < 7) {
			printf("MODERATE\n");
		} else if (X >= 7) {
			printf("HEAVY\n");
		}
	}
	return 0;
}
