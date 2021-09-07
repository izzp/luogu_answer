#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int i;
	int min = 0;
	int a[3];
	int b[3];
	for (i = 0; i < 3; i++) {
		scanf("%d%d", &a[i], &b[i]);
		int N = 0;
		int sum = 0;
		while (1) {
			N += a[i];
			sum += b[i];
			if (N >= n) {
				break;
			}
		}
		if (i == 0)	min = sum;
		if (min > sum)	min = sum;
	}
	printf("%d", min);
	return 0;
}
