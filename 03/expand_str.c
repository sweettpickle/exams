#include <unistd.h>
#include <stdio.h>

int ft_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;

		i = 0;
		while (ft_space(*av[1]))
			av[1]++;
		while (av[1][i])
			i++;
		while (ft_space(av[1][i]))
			i--;
		i--;
		while (i--)
		{
			if (!(ft_space(*av[1])))
				write(1, &*av[1], 1);
			if (ft_space(*av[1]) && !( ft_space(*(av[1] + 1)) ))
				write(1, "   ", 3);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
