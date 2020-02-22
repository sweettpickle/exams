#include <unistd.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
	}
	else
		write(1, "\n", 1);
	return (0);
}
