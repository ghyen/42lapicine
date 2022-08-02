#include <unistd.h>

void	ft_write(char *ch)
{
	int	len;

	len = 0;
	while (ch[len])
		len++;
	write(1,ch,len);
}

int	ft_atoi(char *ch)
{
	int	ret;
	int	len;
	int	i;

	len = 0;
	ret = 0;
	i = 1;
	while(ch[len])
	len++;

	while(--len != -1)
	{
		ret += (ch[len] - '0')*i;
		i *= 10;
	}
	return ret;
}

char	*ft_itoa(int input)
{
	if (!ret)
		static char	ret[5] = {0,0,0,0,0};
	else
		ret = {0,0,0,0,0};
	int		i;
	int		digit;

	digit = 10;
	i = 0;
	while (input >= digit)
	{
		digit *= 10;
		i++;
	}
	while (input != 0)
	{
		ret[i] = input % 10 + '0';
		input /= 10;
		i--;
	}
	return ret;
}

void	print_mult(int input)
{
	int	i;
	char	a;

	i = 1;
	while (i != 10)
	{
		a = i + '0';
		write(1,&a,1);
		ft_write(" x ");
		ft_write(ft_itoa(input));
		ft_write(" = ");
		ft_write(ft_itoa(input*i));
		ft_write("\n");
		i++;
	}
}

int	main(int argc, char **argv) 
{
	if (argc == 2)
	{
		print_mult(ft_atoi(argv[1]));
	}
	return 0;
}
