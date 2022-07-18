#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;
	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}

int	main(int argc, char **argv)
{
	char *input = "edwin";
	int ret = ft_strlen(input);
	printf("%d",ret);
	return 0;

}
