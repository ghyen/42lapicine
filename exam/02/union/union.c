#include <unistd.h>

int	is_in(char *str, int len, char ch)
{
	int	i;
	i = -1;
	while(i++ < len)
	{
		if(*str == ch)
			return 1;
	}
	return 0;
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int	j;
	char	ch;
	i = 0;
	j = 0;
	while(str1[i])
	{
		ch = str1[i];
		write(1,&ch,1);
		i++;
	}

	while(str2[j])
	{
		if(!is_in(str1,i,str2[j]) && !is_in(str2,j,str2[j]))
		{
			ch = str2[j];
			write(1,&ch,1);
		}
		j++;
	}
}

int main(int argc, char **argv) 
{
	if(argc == 3)
		ft_union(argv[1],argv[2]);
	write(1,"\n",1);
	return 0;
}
