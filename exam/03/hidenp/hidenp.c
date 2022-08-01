#include <unistd.h>

void	ft_write(char ch)
{
	write(1,&ch,1);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while(*s)
	{
		len++;
		s++;
	}
	return len;
}
char	ft_hidenp(char *s1, char *s2)
{
	int	i;
	int	s2_len;
	int	flag;

	s2_len = ft_strlen(s2);
	while (*s1)
	{
		flag = 0;
		while (s2[i])
		{
			if (s2[i] == *s1)
				break;
			i++;
		}
		if (i == s2_len)
			return '0';
		s1++;
	}
	return '1';
}

int main(int argc, char **argv) 
{
	if (argc == 3 && *argv[1] > 0)
	{
		char	ret;

		ret = ft_hidenp(argv[1],argv[2]);
		ft_write(ret);
	}
	ft_write('\n');
	return 0;
}
