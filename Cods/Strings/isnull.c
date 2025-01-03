#include <stdio.h>

int     isnull(char *str)
{
    if (*str == '\0')
        return (1);
    return (0);
}

int     main()
{
    printf("%d\n", isnull("Mears"));
}