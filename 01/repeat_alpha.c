#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] > 64 && *argv[1] < 91)
			{
				int n = *argv[1] - 64; 
				while (n--)
					write(1, argv[1], 1);
			}
			else if (*argv[1] > 96 && *argv[1] < 123)
			{
				int n = *argv[1] - 96;
				while (n--)
					write(1, argv[1], 1);
			}
			else 
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
