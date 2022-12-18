/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:31:00 by ytoumi            #+#    #+#             */
/*   Updated: 2022/12/17 22:31:02 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	from_bottom_to_top(int *a, int len)
{
	int		i;
	int		tmp;
	int		tmp2;

	write(1, "rra\n", 4);
	i = 1;
	tmp = a[0];
	a[0] = a[len - 1];
	while (i < len)
	{
		tmp2 = a[i];
		a[i] = tmp;
		tmp = tmp2;
		i++;
	}
}

void	from_bottom_to_top_b(int *a, int len)
{
	int		i;
	int		tmp;
	int		tmp2;

	write(1, "rrb\n", 4);
	i = 1;
	tmp = a[0];
	a[0] = a[len - 1];
	while (i < len)
	{
		tmp2 = a[i];
		a[i] = tmp;
		tmp = tmp2;
		i++;
	}
}

void	swap_first_two(int *a)
{
	int		tmp;

	write(1, "sa\n", 3);
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
}

void	from_top_to_bottom(int *a, int len)
{
	int		i;
	int		tmp;
	int		tmp2;

	write(1, "ra\n", 3);
	i = 2;
	tmp = a[len - 1];
	a[len - 1] = a[0];
	while (i <= len)
	{
		tmp2 = a[len - i];
		a[len - i] = tmp;
		tmp = tmp2;
		i++;
	}
}

void	from_top_to_bottom_b(int *a, int len)
{
	int	i;
	int	tmp;
	int	tmp2;

	write(1, "rb\n", 3);
	i = 2;
	tmp = a[len - 1];
	a[len - 1] = a[0];
	while (i <= len)
	{
		tmp2 = a[len - i];
		a[len - i] = tmp;
		tmp = tmp2;
		i++;
	}
}
