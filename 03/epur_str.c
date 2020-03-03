#include <unistd.h>

#include <stdio.h>

int space(char c)
{
	if ((c >= 9 && c <= 13)  || c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2 && *av[1])
	{
		int i = 0;
		int len;

		while ((*av[1] >= 9 && *av[1] <= 13) || *av[1] == ' ' )
			av[1]++;
		while (av[1][i])
			i++;
		i--;
		while ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' ')
			i--;

		len = i + 1;
		while (len--)
		{
			if (space(*av[1]) && space(*(av[1] + 1)))
			{	
				av[1]++;
				continue ;
			}
			write(1, &*av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
