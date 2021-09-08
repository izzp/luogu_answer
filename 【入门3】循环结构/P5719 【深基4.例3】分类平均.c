#include<stdio.h>
int main()
{
	int n, k,kcon=0;
	double aarr, barr,sn=0,sk=0;
	scanf("%d%d", &n,&k);
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			sk += i;
			kcon++;
		}
		sn += i;
	}
	barr = (sn - sk) / (n - kcon);
	aarr = sk / kcon;
	printf("%.1f %.1f",aarr ,barr);
	return 0;
}

