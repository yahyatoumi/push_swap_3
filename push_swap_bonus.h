/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:31:11 by ytoumi            #+#    #+#             */
/*   Updated: 2022/12/18 02:03:10 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_nbrs
{
	int	x;
	int	i;
	int	y;
	int	*sorted_a;
}	t_nbr;

typedef struct s_parms
{
	int	*a;
	int	a_len;
	int	*b;
	int	b_len;
}	t_params;

char		**ft_split(char *str);
int			ft_atoi_checker(char *str);
void		ft_do_magic_2(int *a, int len);
void		ft_do_magic(int **a, int *a_len, int **b, int *b_len);
int			is_a_sorted(int *a, int len);
void		push_min_to_top(int *a, int len);
int			min_index(int *a, int len);
int			max_index(int *a, int len);
int			ft_check_dup(int *a, int len);
int			*ft_set_a(char **av, int *len);
int			ft_number_of_t_nbrs(char *str);
void		ft_push_a(int **a, int **b, int *a_len, int *b_len);
void		ft_push_b(int **a, int **b, int *a_len, int *b_len);
int			*ft_stack_without_first(int *arr, int *len);
int			*ft_add_to_stack(int *arr, int *len, int to_add);
void		from_top_to_bottom(int *a, int len);
void		swap_first_two(int *a);
void		from_bottom_to_top(int *a, int len);
void		fre_aandb(int *a, int *b);
void		free_split(char **arr);
int			devide_or_multiply(int nb);
void		set_x_y(t_nbr *t_nbrs, int *sorted_arr, int a_len, int devider);
int			biggest_n_index(int *arr, int len);
int			is_it_closer_from_top(int *a, int len, int nb);
void		push_max_to_top(int *b, int len);
void		from_bottom_to_top_b(int *a, int len);
void		from_top_to_bottom_b(int *a, int len);
long long	ft_atoi(const char *str);
void		ft_rr(int *a, int a_len, int *b, int b_len);
int			*sorted_arr(int *arr, int len);
size_t		ft_strlen(const char *str);
void		from_bottom_to_top_bonus(int *a, int len);
void		from_bottom_to_top_b_bonus(int *a, int len);
void		swap_first_two_bonus(int *a, int len);
void		from_top_to_bottom_bonus(int *a, int len);
void		from_top_to_bottom_b_bonus(int *a, int len);
void		ft_push_b_bonus(int **a, int **b, int *a_len, int *b_len);
void		ft_push_a_bonus(int **a, int **b, int *a_len, int *b_len);
void		ft_rr_bonus(int *a, int a_len, int *b, int b_len);
void		bonus_work(t_params *nbrs);
void		ft_rrr(int **a, int *a_len, int **b, int *b_len);
void		ft_ss(int **a, int *a_len, int **b, int *b_len);

#endif
