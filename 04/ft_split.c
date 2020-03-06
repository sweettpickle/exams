#include <stdlib.h>
#include <stdio.h>

int is_sym(char c)
{
    if (c != ' ' && c != '\t' && c != '\n' && c != '\0')
        return (1);
    return (0);
}

int num_of_word(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if (is_sym(str[i]) && !is_sym(str[i + 1]))
            count++;
        i++;
    }
    return (count);
}

int len_word(char *str)
{
    int i = 0;

    while (is_sym(str[i]))
        i++;
    return (i);
}

char    **ft_split(char *str)
{
    char **mas;
    char *s;
    int n;
    int i;
    int j;

    i = 0;
    n = num_of_word(str);

    mas = (char **)malloc(sizeof(char *) * (n + 1));
    if (mas == NULL)
        return (NULL);

    while (i < n)
    {
        j = 0;

        while(is_sym(*str) == 0)
            str++;

        s = (char *)malloc(sizeof(char) * (len_word(str) + 1));
        if (s == NULL)
            return NULL;

        while(is_sym(*str))
            s[j++] = *str++;
        s[j] = '\0';
        mas[i] = s;

        printf("%s\n", mas[i]);
        i++;
    }
    mas[i] = "\0";
    return (mas);
}

int main()
{
    char s[] = "   mi mi   b     w    shv  ";
    ft_split(s);
    return (0);
}