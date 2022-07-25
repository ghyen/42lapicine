int	ft_atoi(const char *str)
{ 
	int	ret;
	int	sign;

	ret = 0;
	sign = 1;

	while(*str != 0 && (*str <= 32)
		str++;

	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign = -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (ret * sign);
}

#include <stdio.h>
int main(int argc, char **argv) 
{
	printf("%d",ft_atoi(argv[1]));

	return 0;
}
