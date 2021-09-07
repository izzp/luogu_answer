#include "stdio.h"
int main()
{
	int a[10] = {0}, x, y = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);
	for (int i = 0; i < 10; i++)
	{
		if (a[i] <= x + 30)
			y++;
	}
	printf("%d", y);
	return 0;
}
