#include<stdio.h>
int main() {

	int a, b, c, m, n1=0, n2=0, s, i = 4, j = 9,a1,b1,c1;
	char d;
	scanf("%d-%d-%d-%c", &a, &b, &c, &d);
	a1 = a; b1 = b; c1 = c;
	s = a;
	while (b) {
		m = b % 10;
		n1 += m * i;
		b = b / 10;
		i--;
	}
	while (c) {
		m = c % 10;
		n2 += m * j;
		c = c / 10;
		j--;
	}
	s = (s + n1 + n2) % 11;
	if (s+'0' == d ||s==10&&d=='X') {
		printf("Right");
	}
	else if (s == 10) {
		printf("%d-%d-%d-X", a1, b1, c1);
	}
	else{
		printf("%d-%d-%d-%d", a1, b1, c1, s);
	}
	return 0;
}

