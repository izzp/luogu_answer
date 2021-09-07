#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if ((x * 5) < (x * 3 + 11))
		printf("Local");
	else printf("Luogu");
	return 0;
}

