#include <stdio.h>

int main(void) {
	int T, A, B;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		if (A < B) {
			printf("%d\n", A);
		} else {
			printf("%d\n", B);
		}
	}
	return 0;
}
