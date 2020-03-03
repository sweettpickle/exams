#include <unistd.h>

int main(int ac, char ** av)
{
	if (ac == 3)
	{
		while (*av[2])
		{
			if (*av[1] == *av[2])
				av[1]++;
			av[2]++;
		}
		if (*av[1] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
