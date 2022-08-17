/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikwon <gikwon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:09:15 by gikwon            #+#    #+#             */
/*   Updated: 2022/08/17 02:19:45 by gikwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void    ft_strcpy(char *s1, char *s2)
{
    while(*s2)
        *s1++ = *s2++;
}
int    is_tab(char c)
{
    return (c < 32 || c == ' ') ? 1 : 0;
}

char    **ft_split(char *str)
{
    char    **ret;
    int    i;
    int    j;
    char    *tmp;
    int    index;
    int    tab;

    index = 0;
    tmp = (char *)malloc(sizeof(char) * 10);
    while (index < 10)
              tmp[index++] = 0;
    index = 0;
    tab = 0;
    while (str[index])
        is_tab(str[index++]) ? tab++ : tab;
    ret = (char**)malloc(sizeof(char*) * (tab+1));
    i = 0;
    index = 0;
    while (i < tab+1)
    {
        index = 0;
        *(ret + i) = (char *)malloc(sizeof(char) * 5);
        while (index < 5)
                  ret[i][index++] = 0;
	i++;
    }
    j = 0;
    i = 0;
    index = 0;
    while (*str)
    {
        if (*str < 32 || *str == ' ')
        {
            ft_strcpy(ret[j++],tmp);
            while (index < 10)
                      tmp[index++] = 0;
            index = 0;
            i = 0;
        }
        else
        {
            tmp[i++] = *str;
        }
        str++;
    }
    ft_strcpy(ret[j],tmp);
    return ret;
}
int main(int argc, char **argv)
{
    char **result;
    int i  = 0;

    result = ft_split("hi edwin");
    while (1)
    {
	if (i == 2)
		break;
        printf("%s\n",result[i++]);
    }
    return 0;
}
