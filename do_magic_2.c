/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_magic_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:30:38 by ytoumi            #+#    #+#             */
/*   Updated: 2022/12/18 02:03:03 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(int *a)
{
	if (is_a_sorted(a, 3))
		return ;
	if (a[0] > a[1] && a[1] < a[2] && a[0] < a[2])
		swap_first_two(a);
	else if (a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
	{
		swap_first_two(a);
		from_bottom_to_top(a, 3);
	}
	else if (a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
		from_top_to_bottom(a, 3);
	else if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		swap_first_two(a);
		from_top_to_bottom(a, 3);
	}
	else
		from_bottom_to_top(a, 3);
	return ;
}

void	ft_do_magic_2(int *a, int len)
{
	int	i;

	i = 0;
	if (len == 1)
		return ;
	else if (len == 2)
	{
		if (a[0] > a[1])
			swap_first_two(a);
		return ;
	}
	else if (len == 3)
		ft_sort_3(a);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
