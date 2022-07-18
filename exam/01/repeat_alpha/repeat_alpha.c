#include <unistd.h>

void ()
{
}

int	main(int argc, char **argv)
{
	if(argc != 2 || *argv[1] == "")
		return 0;
	
	while(*argv[1])
	{
		if(*argv[1] >= 'a' && *argv[1] <= 'z')
		{

		}
		argv[1]++;
	}
	return 0;
}
