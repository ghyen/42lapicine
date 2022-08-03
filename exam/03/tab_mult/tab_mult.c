#include <unistd.h>

void	ft_write(char ch)
{
	write(1,&ch,1);
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

void	putnbr(int input)
{
	if (input > 9)
		putnbr(input / 9);
	ft_write(input % 10 + '0');
}

void	print_mult(int input)
{
	int	i;
	char	a;

	i = 1;
	while (i != 10)
	{
		a = i + '0';
		ft_write(a);
		write(1," x ",3);
		putnbr(input);
		write(1," = ",3);
		putnbr(input*i);
		ft_write('\n');
		i++;
	}
}

int	main(int argc, char **argv) 
{
	if (argc == 2)
		print_mult(ft_atoi(argv[1]));
	else
		write(1,"\n",1);
	return 0;
}
