#include <unistd.h>
#include <stdio.h>

int more_one(const char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if ((str[i] != ' '&& str[i] != '\t') && (str[i + 1] == ' '|| str[i + 1] == '\t' || str[i + 1] == '\0'))
            count++;
        if (count > 1)
            return 1;
        i++;
    }
    return 0;
}

void print_word(char *str)
{
    int i = 0;

    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
        write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;

        while (*av[1] == ' ' || *av[1] == '\t')
            av[1]++;
        if (more_one(av[1]))
        {
            while (av[1][i] != ' ' && av[1][i] != '\t')
                i++;
            while (av[1][i])
            {
                if (av[1][i] != ' ' && av[1][i] != '\t')
                    write(1, &av[1][i], 1);
                if ((av[1][i] != ' ' && av[1][i] != '\t') &&
                (av[1][i + 1] == ' ' || av[1][i + 1] == '\t' || av[1][i + 1] == '\0'))
                    write(1, " ", 1);
                i++;
            }
            print_word(av[1]);
        }
        else
            print_word(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}