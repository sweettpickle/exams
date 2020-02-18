#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
	{	
		while (*argv[1])
		{
			if (*argv[1] == 97)
				write(1, "a", 2);
			argv[1]++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
