#include <stdio.h>

int main(void) {
	int T, A, B, C;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &A, &B, &C);
		if (A > B && A > C) {
			printf("Alice\n");
		} else if (B > A && B > C) {
			printf("Bob\n");
		} else if (C > A && C > B) {
			printf("Charlie\n");
		}
	}
	return 0;
}
