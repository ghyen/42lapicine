/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikwon <gikwon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:44:17 by gikwon            #+#    #+#             */
/*   Updated: 2022/08/17 04:34:45 by gikwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	malloc_size(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		if (*str == ' ')
			size++;
		str++;
	}
	return size+1;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}

char	*init(char *this)
{
	int	this_len;
	int	i;
	char	*at;

	i = 0;
	this_len = 0;
	while (this[i] != ' ' && this[i])
	{
		this_len++;
		i++;
	}
	at = (char*)malloc(sizeof(char)*this_len+1);
	
	while (this_len)
	{
		*at = *this;
		at++;
		this++;
		this_len--;
	}
	*at = 0;
	return at-i;
}

char	**rev_wstr(char *str)
{
	char	**ret;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	ret = (char**)malloc(sizeof(char*) * malloc_size(str));
	str += len;
	while(len)
	{
		if(*str == ' ')
		{
			ret[i++] = init(++str);
			str--;
		}
		str--;
		len--;
	}
	ret[i] = init(str);
	return ret;
}

int main(int argc, char **argv) 
{
	char	**output;
	char	print;
	int	print_size;

	if (argc == 2)
	{
		output = rev_wstr(argv[1]);
		print_size = malloc_size(argv[1]);
		while (print_size)
		{
			while(**output)
			{
				print = **output;
				write(1,&print,1);
				(*output)++;
			}
			output++;
			if (print_size != 1)
				write(1," ",1);
			print_size--;
		}
	}
	write(1,"\n",1);
	return 0;
}
