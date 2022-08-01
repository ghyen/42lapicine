#include <unistd.h>

void	ft_write(char ch)
{
	write(1,&ch,1);
}

int	is_tab(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\0')
		return 1;
	return 0;
}

int	is_upper(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return 1;
	return 0;
}

int	is_lower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return 1;
	return 0;
}

void	ft_cap(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (is_tab(s[i+1]) && is_lower(s[i]))
			ft_write(s[i]-32);
		else if (is_upper(s[i]) && !is_tab(s[i+1]))
			ft_write(s[i]+32);
		else
			ft_write(s[i]);
		i++;	
	}
}

int main(int argc, char **argv) 
{
	int	i;

	i = 1;
	while(argc != 1)
	{
		ft_cap(argv[i]);
		i++;
		argc--;
		ft_write('\n');
	}
	return 0;
}
