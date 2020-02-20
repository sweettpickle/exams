#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *a)
{
	int rez;

	rez = 0;
	while (*a)
	{
		rez = rez * 10 + *a - '0';
		a++;
	}
	return (rez);
}

int is_prime(int a)
{
	int i = 2;
	while (i < a)
	{
		if (a % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2 && *av[1] != '-')
	{
		int i = 2;
		int a = ft_atoi(av[1]);
		while (i <= a)
		{
			i +=
		}
	}
	write(1, "\n", 1);
	return (0);
}
