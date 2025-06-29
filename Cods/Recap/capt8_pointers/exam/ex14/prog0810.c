#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int *px;
    int *py;

    x = 2;
    y = 3;
    px = &x;
    py = &y;
    printf("%d %d\n", x, y);
    printf("%d %d\n", *px, *py);
    printf("%ld %ld\n", (long)&px, (long)&py);
    px = py;
    printf("%d %ld %ld %d %d %ld %ld %d\n", x, (long)&x, (long)px, *px, y, (long)&y, (long)py, *py);
}