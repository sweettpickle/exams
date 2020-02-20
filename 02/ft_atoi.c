#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int rez = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		rez = rez * 10 + str[i++] - '0';
	return (rez * sign);
}

int main()
{
	char a[] = "     \t \t \r -1234";
	printf("%d", ft_atoi(a));
	return (0);
}
