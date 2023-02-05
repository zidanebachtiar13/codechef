#include <stdio.h>

int main(void) {
	int T, A, B;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		if ((A + B) % 2 == 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
