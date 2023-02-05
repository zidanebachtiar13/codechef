#include <stdio.h>

int main(void) {
	int N, A, B, C;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &A, &B, &C);
		if ((A > B && A < C) || (A < B && A > C)) {
			printf("%d\n", A);
		} else if ((A < B && B < C) || (A > B && B > C)) {
			printf("%d\n", B);
		} else if ((A < C && B > C) || (A > C && B < C)) {
			printf("%d\n", C);
		}
	}
	return 0;
}
