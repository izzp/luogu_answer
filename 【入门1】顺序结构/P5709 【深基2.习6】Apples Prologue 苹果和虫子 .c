#include <stdio.h>
int main() 
{
    int m, t, s, out;
    scanf("%d%d%d", &m, &t, &s);
    out = m - (int)(s / t);
    if (out <= 0)
        printf("%d", 0);
    else if (s % t == 0)
        printf("%d", out);
    else
        printf("%d", out - 1);
    return 0;
}
