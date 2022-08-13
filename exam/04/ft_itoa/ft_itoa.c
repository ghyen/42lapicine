#include <stdlib.h>
#include <stdio.h> //for main test

void	swap(char *a, char *b)
{
	char	tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
char	*ft_itoa(int nbr)
{
	char	*ret;
	int	i;
	int	input;
	int	len;
	int	sign;

	sign = 0;
	len = 0;
	i = 0;
	input = nbr;
	if (nbr == -2147483648)
		return ("-2147483648");	if (nbr < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	while (input > 10)
	{
		input /= 10;
		len++;
	}
	ret = (char*)malloc(sizeof(char)*len+sign);
	if (sign)
	{
		ret[i] = '-';
		i++;
	}
	while (nbr > 10)
	{
		ret[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	ret[i] = nbr + '0';
	len = 0;
	if (sign)
		len++;
	while (i == len || len < i)
	{
		swap(&ret[i],&ret[len]);
		len++;
		i--;
	}
	return ret;
}

int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));

	return 0;
}
