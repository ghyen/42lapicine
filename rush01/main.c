/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkwon <gkwon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:35:03 by gkwon             #+#    #+#             */
/*   Updated: 2022/09/03 21:14:57 by gkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	direction(int index)
{
	
}

int start(int *input, int *borad, int index, int valid)
{
	char **posibility;
	int	i;

	i = 0;
	if (index == 17) // highst recursive
	{
		if (!valid_check_all()) // valid check all direction
			return (input, borad, index, 0);
		else
		{
			print(); // got it
			return ();
		}
	}
	else
	{
		posibility = possible_search(input[index]); // searching every possibility
		set_board(posibility[i++], index);
		start(input, borad, index++, 1);
		if (valid == 0)
			start(input, borad, index++, 1);
	}
	
}

int main ()
{
	int input[16];
	// rosting input
	
}
