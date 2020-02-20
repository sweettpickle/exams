#include <unistd.h>

int alpha(char s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
		return (1);
	return (0);
}

int ft_alpha_mirror(char c)
{
	return (c < 91 ? (90 - (c - 'A')) : 122 - (c - 'a'));
}

int main(int argc, char **argv)
{
	int c;
	if (argc ==2)
	{
		while (*argv[1])
		{
			if (alpha(*argv[1]))
			{
				c = ft_alpha_mirror(*argv[1]);
				write(1, &c, 1);
			}
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
