#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	while(*src)
	{
		src++;
		i++;
	}
	src -= i;
	if(i == 0)
		return NULL;
	char *new = (char *)malloc(sizeof(char) *(i+1));
	while(*src)
	{
		*new = *src;
		src++;
		new++;
	}
	new -= i;
	
	return new;
}

int main(int argc, char **argv) 
{
	char* new;
	char* old = "";
	new = ft_strdup(old);
	printf("%s",new);
	free(new);
	return 0;
}
