#include <stdio.h>

int     main(void)
{
    FILE    *ptr;

    ptr = fopen("someText.txt", "a");
    fprintf(ptr, "\nWaw, isso e mesmo bastante interessante!");
    fclose(ptr);
    return (0);
}
