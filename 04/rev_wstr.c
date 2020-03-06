#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int len(const char *s)
{
    int i;
    i = 0;

    while (s[i])
        i++;
    return i;
}

void print_word(char *str, int l)
{
    int check;

    check = l;
    while (str[l] != ' ' && str[l] != '\0')
    {
        write(1, &str[l], 1);
        l++;
    }

    if ((str[l] == ' ' && check  != 0) || (str[l] == '\0' && check != 0))
        write(1, " ", 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int l;

        l = len(av[1]);
        while (l--)
        {
            if (av[1][l] == ' ' && av[1][l + 1] != ' ')
                print_word(av[1], l + 1);
            if (l == 0)
                print_word(av[1], l);
        }
    }
    write(1, "\n", 1);
    return (0);
}