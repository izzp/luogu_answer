#include<stdio.h>
int main() {
	int a[3], i, t, j;
	char b[3] = { 'A','B','C' }, d[4] = {'\0'};
	for (i = 0; i < 3; i++)
		scanf("%d ", &a[i]);
	for (i = 0; i < 3; i++)
		scanf("%c", &d[i]);
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j <= 2; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	i = 0;

	while (d[i] != '\0') {
		for (j = 0; j < 3; j++) {
			if (d[i] == b[j])
				printf("%d ", a[j]);
		}
		i++;
	}
	return 0;
}

