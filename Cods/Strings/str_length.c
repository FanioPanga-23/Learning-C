#include <stdio.h>

int     str_length(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int     main()
{
    printf("Tamanho: %d\n", str_length("Angola"));
}