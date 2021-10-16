#include <stdio.h>
#include <math.h>
float jili(float x1,float y1,float x2,float y2)
{
	float dis;
	dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return dis;
}
int main()
{
	float x1, y1, x2, y2, x3, y3, s,a,b,c;
	scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
	a = jili(x1, y1, x2, y2);
	b = jili(x1, y1, x3, y3);
	c = jili(x2, y2, x3, y3);
	s = a + b + c;
	printf("%.2f", s);
	return 0;
}

