//https://www.luogu.com.cn/problem/P1421
#include "stdio.h"
int main()
{
    int a, b,c;
    float x;
    scanf("%d%d", &a, &b);
    x = a + b / 10.0;
    c = x / 1.9;
    printf("%d", c);
    return 0;
}
