#include <unistd.h>

int main(int argc, char **argv)
{
	
	if (argc == 3)
	{
		while (*argv[1])
		{
			if (*argv[1] == *argv[2])
				write(1, argv[1]++, 1);
			argv[2]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
