#include <unistd.h>

int	is_in(char *str, char ch)
{
	while(*str++)
	{
		if(*str == ch)
			return 1;
	}
	return 0;
}

int main(int argc, char **argv) 
{
	char ret[30] = {0,};
	int i = 0;
	int j = 0;
	int flag = 0;
	if(argc != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	while(*argv[1])
	{
		while(argv[2][i])
		{
			if(*argv[1] == argv[2][i])
			{
				flag = 1;
				break;
			}
			i++;
		}
		argv[1]++;
		if(!flag && !is_in(ret,argv[2][i]))
		{
			ret[j] = argv[2][i];
			j++;
			write(1,argv[2][i],1);	
		}
		i = 0;
		flag = 0;
	}
	return 0;
}
