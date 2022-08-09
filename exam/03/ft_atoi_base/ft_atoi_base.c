#include <unistd.h>
#include <stdio.h>
int	ft_atoi_base(const char *str, int str_base)
{
	int	ret;
	int	i;
	int	sign;

	ret = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		ret *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			ret += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'z')
			ret += str[i] - 'a'+10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ret += str[i] - 'A'+10;
		i++;
	}
	return ret * sign;
}

int main(int argc, char **argv) 
{
	printf("%d",ft_atoi_base(argv[1],*argv[2]));
	return 0;
}
