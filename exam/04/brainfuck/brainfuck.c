#include <unistd.h>

void	brain(char *input)
{
	int	pointer;
	char	bytes[2048] = {0,};
	int	loop;
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
			write(1,&bytes[pointer],1);
		else if (*input == '[' && !*input)
		{
			loop = 1;
			while (loop)
			{
				input++;
				*input == '[' ? loop++ : loop;
				*input == ']' ? loop-- : loop;
			}
		}
		else if (*input == ']' && *input)
		{
			loop= = 1;
			while (loop)
			{
				input--;
				*input == '[' ? loop-- : loop;
				*input == ']' ? loop++ : loop;
			}
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
