#include <stdio.h>
int main()
{
	int x, n=0,i,s=0;
	scanf("%d%d", &x, &n);
	for (i = x; i < x + n; i++)
	{
		if (i % 6 == 0 || i % 7 == 0)
			continue;
		else
			s = s + 250;
	}
	printf("%d", s);
	return 0;
}
