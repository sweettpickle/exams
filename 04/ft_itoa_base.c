#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int len(int val, int base)
{
    int count = 0;
    while (val / base)
    {
        val = val / base;
        count++;
    }
    count++;
    return count;
}

char	*ft_itoa_base(int value, int base)
{
    int l = len(value, base);
    int sign = 0;
    char *str;
    int n = value < 0 ? -value : value;

    if (value < 0 && base == 10)
    {
        sign = 1;
        l++;
    }

    str = (char *)malloc(sizeof(char) * (l + 1));
    if (str == NULL)
        return NULL;

    str[l--] = '\0';

    while (l - sign + 1)
    {
        printf("%d\n", l);
        if (n % base < 10)
            str[l] = n % base + '0';
        else
            str[l] = n % base + 'A' - 10;
        n = n / base;
        l--;
    }
    if (l == 0)
        str[l] = '-';
    printf("%s", str);
    return str;
}

int main(int ac, char **av)
{
    ft_itoa_base(atoi(av[1]), atoi(av[2]));
    printf("\n");
    return 0;
}