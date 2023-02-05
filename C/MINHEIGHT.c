#include <stdio.h>

int main(void) {
	int T, X, H;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &X, &H);
		if (X >= H) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
