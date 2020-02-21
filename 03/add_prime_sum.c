#include <unistd.h>

int ft_atoi(char *a)
{
	int rez;

	rez = 0;
	while (*a)
		rez = rez * 10 + *a++ - '0';
	return (rez);
}

void print_num(int n)
{
	char c;
	int i = 0;
	int copy = n;

	while (copy /= 10)
		i++;
	while (i > 0)
	{
		c = n / 10 * i + '0';
		write(1, &c, 1);
		n = n % 10 * i--;
	}
	c = n % 10 + '0';
	write(1, &c, 1);
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
		int count = 0; 
		
		if (a == 1)
		{
			print_num(a);
			return (0);
		}

		while (i <= a)
		{
			if (is_prime(i))
				count += i;
			i++;
		}
		print_num(count);
	}
	else 
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
