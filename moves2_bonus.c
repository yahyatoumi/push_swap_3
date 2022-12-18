/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:31:03 by ytoumi            #+#    #+#             */
/*   Updated: 2022/12/18 02:01:13 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_push_b_bonus(int **a, int **b, int *a_len, int *b_len)
{
	int		b_new_len;
	int		a_new_len;

	if (*a_len == 0)
		return ;
	b_new_len = *b_len;
	a_new_len = *a_len;
	*b = ft_add_to_stack(*b, &b_new_len, *a[0]);
	*a = ft_stack_without_first(*a, &a_new_len);
	*b_len = b_new_len;
	*a_len = a_new_len;
}

void	ft_push_a_bonus(int **a, int **b, int *a_len, int *b_len)
{
	int		b_new_len;
	int		a_new_len;

	if (*b_len == 0)
		return ;
	b_new_len = *b_len;
	a_new_len = *a_len;
	*a = ft_add_to_stack(*a, &a_new_len, *b[0]);
	*b = ft_stack_without_first(*b, &b_new_len);
	*b_len = b_new_len;
	*a_len = a_new_len;
}

void	ft_rr_bonus(int *a, int a_len, int *b, int b_len)
{
	from_top_to_bottom_b_bonus(b, b_len);
	from_top_to_bottom_b_bonus(a, a_len);
}

void	ft_rrr(int **a, int *a_len, int **b, int *b_len)
{
	from_bottom_to_top_bonus(*a, *a_len);
	from_bottom_to_top_bonus(*b, *b_len);
}

void	ft_ss(int **a, int *a_len, int **b, int *b_len)
{
	swap_first_two_bonus(*b, *b_len);
	swap_first_two_bonus(*a, *a_len);
}
