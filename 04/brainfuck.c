#include <stdlib.h>
#include <unistd.h>

int fun(char *s, int i)
{
    int flag = 0;

    if (s[i] == '[')
    {
        while(s[i++])
        {
            if (s[i] == ']' && flag == 0)
                break;
            if (s[i] == '[')
                flag++;
            if (s[i] == ']')
                flag--;
        }
        i--;
    }
    if (s[i] == ']')
    {
        while(s[i--])
        {
            if (s[i] == '[' && flag == 0)
                break;
            if (s[i] == ']')
                flag++;
            if (s[i] == '[')
                flag--;
        }
        i--;
    }
    return (i);
}

//int fun(char *s, int i)
//{
//    int flag = 0;
//
//    if (s[i] == '[')
//    {
//        i++;
//        while (!(s[i] == ']' && flag == 0))
//        {
//            if (s[i] == '[')
//                flag++;
//            else if (s[i] == ']')
//                flag--;
//            i++;
//        }
//        i--;
//    }
//    if (s[i] == ']')
//    {
//        i--;
//        while (!(s[i] == '[' && flag == 0))
//        {
//            if (s[i] == ']')
//                flag++;
//            if (s[i] == '[')
//                flag--;
//            i--;
//        }
//        i--;
//    }
//    return(i);
//}

void ft_brain(char *str)
{
    int i = 0;
    int pointer = 0;
    char bytes[2048];

    while (i < 2048)
        bytes[i++] = 0;

    i = 0;
    while (str[i])
    {
        if (str[i] == '>')
            pointer++;
        else if (str[i] == '<')
            pointer--;

        else if (str[i] == '+')
            bytes[pointer]++;
        else if (str[i] == '-')
            bytes[pointer]--;
        else if (str[i] == '.')
            write(1, &bytes[pointer], 1);

        else if (str[i] == '[')
        {
            if (bytes[pointer] == 0)
                i = fun(str, i);
        }
        else if (str[i] == ']')
        {
            if (bytes[pointer] != 0)
                i = fun(str, i);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_brain(av[1]);
    else
        write(1, "\n", 1);
    return (0);
}

