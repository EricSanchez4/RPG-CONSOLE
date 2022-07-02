/*
** ETNA PROJECT, 14/04/2022 by sanche_e
** \\wsl.localhost\Ubuntu\home\unix
** File description:
**      
*/

#include <stdio.h>
#include <stdlib.h>
char *my_strdup(const char *src)
{

char *dest;
int len;
len = 0;

    while (src[len])
    {
        len++;
    }

    dest = malloc((len+1)*sizeof(char));
    if (dest ==0)
    {
        return "Malloc n'est pas valide";
    }

    for( int i = 0; i < len; i++)
    {
    dest[i] = src[i];

    }
    dest[len] = '\0';
    return (dest);
}

// int main()
// {
//     char *dest;
//     dest = my_strdup("test");
//     printf("%s\n", dest);
//     free(dest);
// }