#include <unistd.h>

int main(int argc, char **argv) 
{
	char	ret[10] = {0,};
	int	count;
	int	i;

	i = 0;
	count = -1;
	if (argc == 3)
	{
		while (*argv[2])
		{
			if (!*argv[1])
				break;
			if (*argv[2] == *argv[1])
			{
				ret[++count] = *argv[1];
				argv[1]++;
			}
			argv[2]++;
		}
		while(ret[i])
		{
			write(1,&ret[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
