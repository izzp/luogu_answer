#include<stdio.h>
int main() {
    int a[3], j, i, t;
    for (i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 3; i++)//ÅÅÐò
        for (j = i + 1; j < 3; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    if (a[0] + a[1] < a[2])
    {
        printf("Not triangle");
        return 0;
    }
    if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])//Ö±½Ç
        printf("Right triangle\n");
    if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2])//Èñ½Ç
        printf("Acute triangle\n");
    if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2])//¶Û½Ç
        printf("Obtuse triangle\n");
    if ((a[0] == a[1] ) || (a[2] == a[1])|| (a[0] == a[2]))//µÈÑü
        printf("Isosceles triangle\n");
    if (a[0] == a[1] && a[0] == a[2])//µÈ±ß
        printf("Equilateral triangle");
    return 0;
}

