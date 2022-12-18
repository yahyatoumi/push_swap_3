/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:31:13 by ytoumi            #+#    #+#             */
/*   Updated: 2022/12/18 02:03:15 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

void	ft_do_split(t_nbr *t_nbrs, int *sorted_arr, int a_len)
{
	if (a_len <= 100)
		set_x_y(t_nbrs, sorted_arr, a_len, 3);
	else if (a_len <= 200)
		set_x_y(t_nbrs, sorted_arr, a_len, 4);
	else if (a_len <= 300)
		set_x_y(t_nbrs, sorted_arr, a_len, 5);
	else if (a_len <= 400)
		set_x_y(t_nbrs, sorted_arr, a_len, 6);
	else
		set_x_y(t_nbrs, sorted_arr, a_len, 7);
	t_nbrs->i = sorted_arr[(t_nbrs->x / 2) + 1];
	free(t_nbrs->sorted_a);
}

void	do_magic_part2(int **a, int *a_len, int **b, int *b_len)
{
	ft_do_magic_2(*a, *a_len);
	while (*b_len > 0)
	{
		push_max_to_top(*b, *b_len);
		ft_push_a(a, b, a_len, b_len);
	}
	free(*a);
	free(*b);
}

void	ft_do_magic_5(int **a, int *a_len, int **b, int *b_len)
{
	t_nbr	t_nbrs;

	while (*a_len > 3)
	{
		t_nbrs.sorted_a = sorted_arr(*a, *a_len);
		ft_do_split(&t_nbrs, t_nbrs.sorted_a, *a_len);
		if (is_a_sorted(*a, *a_len))
			break ;
		while (t_nbrs.x >= 0)
		{
			if (*a[0] <= t_nbrs.y)
			{
				ft_push_b(a, b, a_len, b_len);
				if (*b[0] < t_nbrs.i && !is_it_closer_from_top(
						*a, *a_len, t_nbrs.y) && *a[0] > t_nbrs.y)
					ft_rr(*a, *a_len, *b, *b_len);
				else if (*b[0] < t_nbrs.i)
					from_top_to_bottom_b(*b, *b_len);
				t_nbrs.x--;
			}
			else
				from_top_to_bottom(*a, *a_len);
		}
	}
}

int	main_2(int **a, int *a_len, int **b, int *b_len)
{
	if (is_a_sorted(*a, *a_len))
	{
		fre_aandb(*a, *b);
		return (0);
	}
	if (*a_len < 25)
	{
		ft_do_magic(a, a_len, b, b_len);
		return (0);
	}
	ft_do_magic_5(a, a_len, b, b_len);
	do_magic_part2(a, a_len, b, b_len);
	return (1);
}

int	main(int ac, char **av)
{
	int	len;
	int	b_len;
	int	*a;
	int	*b;

	len = ac - 1;
	b_len = 0;
	a = ft_set_a(av, &len);
	if (!a || ft_check_dup(a, len))
	{
		write(1, "error\n", 6);
		return (0);
	}
	b = (int *)malloc(sizeof(int));
	if (!b)
	{
		free(a);
		return (0);
	}
	if (!main_2(&a, &len, &b, &b_len))
		return (0);
}
