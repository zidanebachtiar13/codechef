#include <stdio.h>

int main(void) {
	int T, X;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &X);
		printf("%d\n", X * 15);
	}
	return 0;
}
