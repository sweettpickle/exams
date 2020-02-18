#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char c;

		while (*argv[1])
		{
			if ((*argv[1] > 64 && *argv[1] < 90) || 
				(*argv[1] > 96 && *argv[1] < 122))
				c = *argv[1] + 1;
			else if (*argv[1] == 90 || *argv[1] == 122)
				c = *argv[1] - 25;
			else 
				c = *argv[1];
			write(1, &c, 1);
			argv[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
