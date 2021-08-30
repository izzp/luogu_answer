//https://www.luogu.com.cn/problem/P1425
#include "stdio.h"
int main()
{
    int a, b, c, d;
    int e, f;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (d >= b)
    {
        e = c - a;
        f = d - b;
    }
    else
    {
        e = c - a - 1;
        f = 60 + (d - b);
    }
    printf("%d %d", e, f);
    return 0;
}
