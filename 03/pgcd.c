#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int a;
	int b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		a = atoi(av[1]);
		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
