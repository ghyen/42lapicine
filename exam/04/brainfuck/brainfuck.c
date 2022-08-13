#include <unistd.h>

void	go_to_the_matching()
{
	
}

void	brain(char *input)
{
	int	pointer;
	char	bytes[2048] = {0,};
	while (*input)
	{
		if (*input == '>')
			pointer++;
		else if (*input == '<')
			pointer--;
		else if (*input == '+')
			bytes[pointer]++;
		else if (*input == '-')
			bytes[pointer]--;
		else if (*input == '.')
			write(1,bytes[pointer],1);
		else if (*input == '[')
		{


		}
		else if (*input == ']')
		{

		}
		input++;
	}
}

int	main(int argc, char **argv) 
{
	if (argc == 2)
		barin(*argv[1]);
	write(1,'\n',1);
	return 0;
}
