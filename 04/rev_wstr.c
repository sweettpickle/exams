#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int len(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}



int main(int argc, char **argv)
{
    if (argc ==2)
    {
        int l;
        char *str;
        int c;
        int i = 0;

        l = len(argv[1]);
        str = (char *)malloc(sizeof(char) * l + 1);
        if (str == NULL)
            return (0);
        while (argv[1][l] != ' ')
            l--;
    }
    write(1, "\n", 1);
    return (0);
}