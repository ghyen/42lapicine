#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_strcpy(char *s1, char *s2)
{
	while(*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = *s2;
	return s1;
}

int	main(int argc, char **argv)
{
	char dst[] = "gihyeon";
	char *src = malloc(sizeof(char)*10);

	ft_strcpy(dst,src);
	printf("%s",dst);
	return 0;
}
