#include <stdio.h>
#include <unistd.h>

void    ft_putstrc(char *vet)
{
    char str[6] = *vet;
    int i = 0;
    while (i <= 6-1)
    {
        printf("%c\n", str[i]);  
        i ++;  
    }
    
    
}

int main()
{
    char stra[6] = "Mears";
    /*int i = 0;

    while (stra[i] != '\0')
    {
        printf("%c\n", stra[i]);
        i ++;
    }*/

   ft_putstrc(stra);
}