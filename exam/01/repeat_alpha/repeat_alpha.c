#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc != 2)
		return 0;
	
	while(*argv[1])
	{
		char ch = *argv[1];
		if((*argv[1] >= 'a' && *argv[1] <= 'z')
			|| (*argv[1] >= 'A' && *argv[1] <= 'Z'))
		{
			int count = 0;
			if(*argv[1] >= 'a' && *argv[1] <= 'z')
				count = *argv[1] - 96;
			if(*argv[1] >= 'A' && *argv[1] <= 'Z')
				count = *argv[1] - 64;

			while(count != 0)
			{
				write(1,&ch,1);
				count--;
			}
		}
		else
		{
			write(1,&ch,1);
		}
		argv[1]++;
	}
	write(1,"\n",1);
	return 0;
}
