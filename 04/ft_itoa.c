#include <stdlib.h>
#include <stdio.h>

int len(int n)
{
    int count = 0;

    while ((n = n/10))
        count++;
    count++;
    return count;
}

int raz(int n)
{
    int c = 1;
    while (--n)
        c *= 10;
    return c;
}

char	*ft_itoa(int nbr)
{
    int i = 0;
    char *mas = (char *)malloc(len(nbr) + 1 * sizeof(char));
    if (mas == NULL)
        return NULL;
    if (nbr < 0)
    {
        mas[i++] = '-';
        nbr *= -1;
    }
    while (nbr/10)
    {
        mas[i++] = nbr / raz(len(nbr)) + '0';
        nbr %= raz(len(nbr));
    }
    mas[i] = nbr + '0';
    mas[++i] = '\0';
//    printf("%s", mas);
    return (mas);
}

int main()
{
    printf("%s", ft_itoa(-1));
//    printf("%d", 12/10);
    return 0;
}