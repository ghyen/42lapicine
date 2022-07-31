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
		
	while(len != -1)
	{
		ret += (ch[len] - '0')*i;
		i *= 10;
		len--;
	}
	return ret;
}

char	*ft_itoa(int i)
{

}

int	prime_sum_until(int until)
{
	int	sum;
	int	cnt;
	int	i;

	sum = 1;
	cnt = 1;
	while (cnt <= until) // searching prime until argv
	{
		i = 2;
		while (cnt > i++)
			if (cnt % i == 0)
				break;
		
		if (i == cnt + 1)
			sum += cnt;
		cnt++;
	}
	return sum;
}

int main(int argc, char **argv) 
{
	if (argc == 2 && *argv[1] > 0)
	{
		char	*ret;
		ret = ft_itoa(prime_sum_until(ft_atoi(argv[1])));
		while(*ret)
			ft_write(*ret++);
	}
	ft_write('\n');
	return 0;
}
