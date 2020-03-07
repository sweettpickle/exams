#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int num;

    if (ac == 2)
    {
        num = atoi(av[1]);

        if (num == 1)
            printf("1");
        else
        {
            i = 2;
            while (num > 1)
            {
                if (num % i == 0)
                {
                    printf("%d", i);
                    num = num / i;
                    if (num > 1)
                        printf("*");
                    i--;
                }
                i++;
            }
        }

    }
    printf("\n");
    return (0);
}