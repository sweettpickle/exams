#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			char c;
			if (*argv[1] > 64 && *argv[1] < 91)
				c = *argv[1] + 32;
			else if (*argv[1] > 96 && *argv[1] < 123)
				c = *argv[1] - 32;
			else
				c = *argv[1];
			write(1, &c, 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
