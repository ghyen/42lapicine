#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return *s1 - *s2;
		else if (*s2 > *s1)
			return *s1 - *s2;
		s1++;
		s2++;
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("%d\n", ft_strcmp("same","same"));
	printf("%d\n", ft_strcmp("notsame", "nsame"));
	printf("%d\n", strcmp("same", "same"));
	printf("%d\n", strcmp("notsame", "nsame"));
	return (0);
}
