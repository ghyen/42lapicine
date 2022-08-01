/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikwon <gikwon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:51:15 by gikwon            #+#    #+#             */
/*   Updated: 2022/08/01 01:59:48 by gikwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char ch)
{
	write(1,&ch,1);
}

int	is_char(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return 1;
	return 0;
}
int	is_space(char ch)
{
	if (ch == 32 || ch >= 8 && ch <= 12)
		return 1;
	return 0;
}
int main(int argc, char **argv) 
{
	if (argc == 2 || !*argv[1])
	{
		int	flag;

		flag = 0;
		while (!is_char(*argv[1]))
				argv[1]++;

		while (*argv[1])
		{
			if (is_char(*argv[1]))
			{
				if (flag == 1)
					ft_write(' ');
				ft_write(*argv[1]);
				flag = 0;
			}
			else if (is_space(*argv[1]))
				flag = 1;
			else
				ft_write(*argv[1]);
			argv[1]++;
		}
	}
	ft_write('\n');
	return 0;
}
