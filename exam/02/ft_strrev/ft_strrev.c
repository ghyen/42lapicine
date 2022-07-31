#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i /2)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return str;
}

int main(int argc, char **argv) 
{
	char str[] = "edwin";
	char *ret = ft_strrev(str);
	printf("%s",ret);
	return 0;
}
