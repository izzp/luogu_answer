#include<stdio.h>
int main()
{
    float t,avg;
    int  n,out;
    scanf("%f%d",&t,&n);
    avg = t / n;
    out = 2 * n;
    printf("%.3f\n%d", avg, out);
    return 0;
}

