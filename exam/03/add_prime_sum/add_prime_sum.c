/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikwon <gikwon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:19:45 by gikwon            #+#    #+#             */
/*   Updated: 2022/08/01 01:20:54 by gikwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char ch)
{
	write(1,&ch,1);
}

int	ft_atoi(char *ch)
{
	int	ret;
	int	len;
	int	i;

	len = 0;
	ret = 0;
	i = 1;
	while(ch[len])
	len++;
		
	while(--len != -1)
	{
		ret += (ch[len] - '0')*i;
		i *= 10;
	}
	return ret;
}

char	*ft_itoa(int input)
{
	static char	ret[10] = "";
	int		i;
	int		digit;

	digit = 10;
	i = 0;
	while (input >= digit)
	{
		digit *= 10;
		i++;
	}
	while (input != 0)
	{
		ret[i] = input % 10 + '0';
		input /= 10;
		i--;
	}
	return ret;
}

int	prime_sum_until(int until)
{
	int	sum;
	int	cnt;
	int	i;

	sum = 2;
	cnt = 3;
	while (cnt <= until) // searching prime until argv
	{
		i = 2;
		while (cnt > i)
			if (cnt % i++ == 0)
				break;
		
		if (i == cnt)
			sum += cnt;
		cnt++;
	}
	return sum;
}

int main(int argc, char **argv) 
{
	if (argc == 2 && *argv[1] > 0)
	{
		char	*ret;
		ret = ft_itoa(prime_sum_until(ft_atoi(argv[1])));
		while(*ret)
		{
			ft_write(*ret);
			ret++;
		}
	}
	else
		ft_write('0');
	ft_write('\n');
	return 0;
}
