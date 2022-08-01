#include <unistd.h>

void	ft_write(char ch)
{
	write(1,&ch,1);
}

int	is_tab(char ch)
{
	return ((ch == ' ' || ch == '\t') ? 1 : 0);
}

int	is_alp(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return 1;
	return 0;
}

void	expand_str(char *s)
{
	int	flag;

	flag = 0;
	while(!is_alp(*s))
		s++;
	while(*s)
	{
		if (is_tab(*s) && !flag)
			flag = 1;
		else if (!is_tab(*s))
		{		
			if (flag)
			{
				write(1,"   ",3);
				flag = 0;
			}
			ft_write(*s);
			flag = 0;
		}
		s++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2 && *argv[1])
		expand_str(argv[1]);
	ft_write('\n');
	return 0;
}
