#include <stdio.h>

int main(void) {
	int T, X, Y;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &X, &Y);
		if (X >= Y * 2) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
