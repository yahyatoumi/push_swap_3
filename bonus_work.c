/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_work.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:30:34 by ytoumi            #+#    #+#             */
/*   Updated: 2022/12/17 22:30:35 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "push_swap_bonus.h"

int	check_if_sorted(int *a, int a_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < a_len)
	{
		j = i + 1;
		while (j < a_len)
		{
			if (a[i] > a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	do_bonus_magic_2(t_params *nbrs, char *move)
{
	if (!strcmp(move, "ra\n"))
		return (from_top_to_bottom_bonus(nbrs->a, nbrs->a_len), 1);
	else if (!strcmp(move, "rb\n"))
		return (from_top_to_bottom_bonus(nbrs->b, nbrs->b_len), 1);
	else if (!strcmp(move, "rra\n"))
		return (from_bottom_to_top_bonus(nbrs->a, nbrs->a_len), 1);
	else if (!strcmp(move, "rrb\n"))
		return (from_bottom_to_top_bonus(nbrs->b, nbrs->b_len), 1);
	else if (!strcmp(move, "sa\n"))
		return (swap_first_two_bonus(nbrs->a, nbrs->b_len), 1);
	else if (!strcmp(move, "sb\n"))
		return (swap_first_two_bonus(nbrs->b, nbrs->b_len), 1);
	else if (!strcmp(move, "pb\n"))
		return (ft_push_b_bonus(&nbrs->a, &nbrs->b, &nbrs->a_len,
				&nbrs->b_len), 1);
	else if (!strcmp(move, "pa\n"))
		return (ft_push_a_bonus(&nbrs->a, &nbrs->b, &nbrs->a_len,
				&nbrs->b_len), 1);
	else if (!strcmp(move, "rr\n"))
		return (ft_rr_bonus(nbrs->a, nbrs->a_len, nbrs->b, nbrs->b_len), 1);
	else if (!strcmp(move, "rrr\n"))
		return (ft_rrr(&nbrs->a, &nbrs->a_len, &nbrs->b, &nbrs->b_len), 1);
	else if (!strcmp(move, "ss\n"))
		return (ft_ss(&nbrs->a, &nbrs->a_len, &nbrs->b, &nbrs->b_len), 1);
	return (0);
}

int	do_bonus_magic(t_params *nbrs, char *move)
{
	if (do_bonus_magic_2(nbrs, move))
		return (1);
	else
	{
		write(1, "error\n", 6);
		free(move);
		return (0);
	}
	return (1);
}

void	bonus_work(t_params *nbrs)
{
	int		i;
	char	*move;

	i = 0;
	move = get_next_line(0);
	while (move)
	{
		if (!do_bonus_magic(nbrs, move))
			return ;
		free(move);
		move = get_next_line(0);
	}
	if (check_if_sorted(nbrs->a, nbrs->a_len) && nbrs->b_len == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
