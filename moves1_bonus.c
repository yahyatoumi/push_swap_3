/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:30:57 by ytoumi            #+#    #+#             */
/*   Updated: 2022/12/17 22:30:59 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	from_bottom_to_top_bonus(int *a, int len)
{
	int		i;
	int		tmp;
	int		tmp2;

	if (len < 2)
		return ;
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

void	from_bottom_to_top_b_bonus(int *a, int len)
{
	int		i;
	int		tmp;
	int		tmp2;

	if (len < 2)
		return ;
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

void	swap_first_two_bonus(int *a, int len)
{
	int		tmp;

	if (len < 2)
		return ;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
}

void	from_top_to_bottom_bonus(int *a, int len)
{
	int		i;
	int		tmp;
	int		tmp2;

	if (len < 2)
		return ;
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

void	from_top_to_bottom_b_bonus(int *a, int len)
{
	int	i;
	int	tmp;
	int	tmp2;

	if (len < 2)
		return ;
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
