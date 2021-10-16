#include <stdio.h>
#include <math.h>
int iszs(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	if (a == 0 || a == 1) return 0;
	return 1;
}
int main()
{
	int n, a[100],i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		if (iszs(a[i]) == 1)
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}

