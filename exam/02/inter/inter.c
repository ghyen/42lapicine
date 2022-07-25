#include <unistd.h>

int	is_same(char *str, char ch)
{
	while(*str)
	{
		if(*str == ch)
			return 0;
		str++;
	}
	return 1;
}

int	main(int argc, char **argv) 
{
	char 	dou[10] = {0,};
	int 	i = 0;
	int 	j = 0;
	char 	print;
	if(argc != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	while(*argv[1])
	{
		while(argv[2][i])
		{
			if(is_same(dou,*argv[1]) && *argv[1] == argv[2][i])
			{
				dou[j] = *argv[1];
				j++;
				break;
			}
			i++;
		}
		argv[1]++;
		i = 0;
	}
	while(dou[i])
	{
		print = dou[i];
		write(1,&print,1);
		i++;
	}
	return 0;
}
