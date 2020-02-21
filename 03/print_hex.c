#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int r;
	
	r = 0;
	while (*str)
		r = r * 10 + *str++ - '0';
	return (r);
}


void print_num(char *str)
{
	char c;
	char mas[6] = "abcdef";
	while (*str)
	{	
		if (*str >= 0 && *str <= 9)
			c = *str + '0';
		else
			c = mas[*str - 10];
		write(1, &c, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int num;
		char str[2048];
		int i;
		
		i = 0;
		num = ft_atoi(av[1]);
		while (num / 16)
		{
			str[i] = num % 16;
			num = num / 16;
			i++;
		}
		str[i] = num % 16;
		print_num(str);
//		printf("%s", str);
	}
	write(1, "\n", 1);
	return (0);
}
