#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int len(int n, int base)
{
    int count = 0;
    while ((n = n / base))
        count++;
    count++;
    return (count);
}

char	*ft_itoa_base(int value, int base)
{
    int i = len(value, base);
    char *str;
    int s = 0;
    int n = value;

    if (value < 0 && base == 10)
    {
        s = 1;
        i++;
    }
    str = (char*)malloc(sizeof(char) * (i + 1));

    str[i--] = '\0';

    while (i + s + 1)
    {
        if (n % base < 10)
            str[i] = n % base + '0';
        else
            str[i] = n % base + 'A' - 10;
        n = n / base;
//        printf("%d\n", i);
        i--;
    }
    if (i == 0)
        str[i] = '-';
    printf("\n%s", str);
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_itoa_base(atoi(av[1]), atoi(av[2]));
    }
    printf("\n");
    return (0);
}


//char	*ft_itoa_base(int value, int base)
//{
//    char	*s;
//    long	n;
//    int		sign;
//    int		i;
//
//    n = (value < 0) ? -(long)value : value;
//    sign = (value < 0 && base == 10) ? -1 : 0;
//    i = (sign == -1) ? 2 : 1;
//    while ((n /= base) >= 1)
//        i++;
//    printf("%d\n", i);
//    s = (char*)malloc(sizeof(char) * (i + 1));
//    s[i] = '\0';
//    n = (value < 0) ? -(long)value : value;
//    while (i-- + sign)
//    {
////        printf("%d\n", i);
//
//        s[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
////        printf("%c\n", s[i]);
//        n /= base;
//    }
//    (i == 0) ? s[i] = '-' : 0;
//    return (s);
//}
//
//int		main(int ac, char **av)//
//{
//    if (ac == 3)//
//        printf("%s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));//
//    return (1);//
//}