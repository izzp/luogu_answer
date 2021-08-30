#include<stdio.h>
int main()
{
    int a, b, g, s, ba;
    scanf("%d.%d", &a, &b);
    g = a % 10;
    s = a / 10 % 10;
    ba = a / 100;
    printf("%d.%d%d%d", b, g, s, ba);
    return 0;
}

