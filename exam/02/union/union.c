#include <unistd.h>

int	is_in(char *str, int len, char ch)
{
	int	i;

	i = -1;
	while(++i < len)
	{
		if(str[i] == ch)
			return 1;
	}
	return 0;
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int	j;

	i = -1;
	while(str1[++i])
		if(!is_in(str1,i,str1[i]))
			write(1,&str1[i],1);
	j = -1;
	while(str2[++j])
		if(!is_in(str1,i,str2[j]) && !is_in(str2,j,str2[j]))
			write(1,&str2[j],1);
}

int main(int argc, char **argv) 
{
	if(argc == 3)
		ft_union(argv[1],argv[2]);
	write(1,"\n",1);
	return 0;
}
