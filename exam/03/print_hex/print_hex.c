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

void	print_hex(int input)
{
	int	temp;
	char	ret;

	if (input / 16 > 1)
		print_hex(input/16);
	temp = input % 16;
	if (temp < 10)
		ft_write(temp + '0');
	else
		ft_write(temp - 10 + 'a');
}

int main(int argc, char **argv) 
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	return 0;
}
