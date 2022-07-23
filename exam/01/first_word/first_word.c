#include <unistd.h>

int	isAlpha(char input)
{
	if((input >= 'A' && input <= 'Z') || 
		(input >= 'a' && input <= 'z'))
		return 1;
	else return 0;
}

int main(int argc, char **argv)
{
	int flag = 0;
	if(argc != 2)
	{
		write(1,"\n",1);
		return 0;
	}
	while(*argv[1])
	{
		if(isAlpha(*argv[1]))
				flag = 1;
		if(( (*argv[1]>=8 && *argv[1]<=12) 
					|| *argv[1] ==32) && flag)
		{
			write(1,"\n",1);
			return 0;
		}
		write(1,argv[1],1);
		argv[1]++;
	}
	write(1,"\n",1);
	return 0;
}
