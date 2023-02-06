#include <stdio.h>

int main(void) {
	int X, Y;
	scanf("%d %d", &X, &Y);
	if (X >= Y * 2) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}
