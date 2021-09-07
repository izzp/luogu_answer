#include "stdio.h"
int main()
{
	int a[7], b[7], c=0, i, max=0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		if (a[i] + b[i] > 8 && a[i]+b[i]>max)
		{
			max = a[i] + b[i];
			c = i+1;
		}
	}
	printf("%d", c);
	return 0;
}


