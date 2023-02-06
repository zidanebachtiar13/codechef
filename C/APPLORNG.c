#include <stdio.h>

int main(void) {
	int X, A, B;
	scanf("%d", &X);
	scanf("%d %d", &A, &B);
	if (X >= A + B) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}
