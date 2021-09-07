#include<stdio.h>
int main() {
    int a[3], j, i, min, max, t, flag = 0;
    for (i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 3; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    min = a[0];
    max = a[2];
    for (i = 2; i <= min; i++) {
        if (min % i == 0 && max % i == 0) {
            flag = i;
        }
    }
    if (flag != 0) {
        max = max / flag;
        min = min / flag;
    }
    printf("%d/%d", min, max);

    return 0;
}

