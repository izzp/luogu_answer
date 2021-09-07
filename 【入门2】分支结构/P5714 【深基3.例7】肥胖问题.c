#include <stdio.h>
int main()
{
	float m, h,bmi;
	scanf("%f%f", &m, &h);
	bmi = m / (h * h);
	if (bmi < 18.5)
		printf("Underweight");
	else if (bmi >= 18.5 && bmi < 24)
		printf("Normal");
	else printf("%.4f\nOverweight", bmi);
	return 0;
}

