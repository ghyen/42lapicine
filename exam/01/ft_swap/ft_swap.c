#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char **argv) 
{
	int a = 10;
	int b = 20;
	printf("a is %d b is %d",a,b);
	ft_swap(&a,&b);
	
	printf("\na is %d b is %d",a,b);
	return 0;
}
