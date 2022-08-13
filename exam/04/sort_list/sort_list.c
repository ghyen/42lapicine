#include <unistd.h>
#include <stdio.h>
typedef    struct        s_list
{
    int                data;
    struct s_list    *next;
}                    t_list;
int		ascending(int a, int b)
{
		return (a <= b);
}
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*begin;
	t_list	*n;
	int	t_data;

	begin = lst;
	while (lst)
	{
		n = lst->next;
		while (n)
		{
			if (cmp(n->data,lst->data) > 0)
			{
				t_data = begin->data;
				begin->data = n->data;
				n->data = t_data;
			}
			n = n->next;
		}
		lst = lst->next;
	}
	return begin;
}

#include <stdlib.h>

int		main(void)
{
	t_list *l;
	int		i;
	t_list	*t;
	t_list	*b;

	i = 50;
	l = malloc(sizeof(t_list));
	t = l;
	b = l;
	while (i)
	{
		l->data = i % 3;
		l->next = malloc(sizeof(t_list));
		l = l->next;
		--i;
	}
	l->data = (int)"fromage";
	l->next = NULL;
	while (t)
	{
		printf("%d ", t->data);
		t = t->next;
		++i;
	}
	b = sort_list(b, ascending);
	while (b)
	{
		printf("%d ", b->data);
		b = b->next;
		++i;
	}
}
