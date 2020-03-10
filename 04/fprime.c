#include <stdio.h>
#include <stdlib.h>

void prime(unsigned int num)
{
    int i = 2;

    if (num == 1)
        printf("1");
    else
    {
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

int main(int ac, char **av)
{
    if (ac == 2)
        prime(atoi(av[1]));
    printf("\n");
    return (0);
}