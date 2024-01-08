/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:02:05 by nsabia            #+#    #+#             */
/*   Updated: 2024/01/08 11:48:09 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>


typedef struct s_sort
{
	int	*len_a;
	int	*len_b;
	int stack_a_arr[1000];
}	t_sort;

void			check_parameters(int argc, char *argv[],
					int *stack_a, int *stack_b);
int				*push_in_stack(int *stack_size, char *argv[],
					int *stack_a, int *stack_b);
void			check_duplicates(char *argv[], int *stack_a, int *stack_b);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_isalpha(char *str);
int				safe_atoi(char *str, int *stack_a, int *stack_b);
int				ft_atoi(const char *nptr);
long long int	ft_strtoll(const char *nptr, int base);
int				is_sorted(int stack_size, int *stack_a);
int				is_sorted_backwards(int stack_size, int *stack_a);
char			*ft_substr(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_strchr_int(const char *s, int c);
int				string_in_stack(char *argv, int *stack_a, int *stack_b, int i);
void			check_parameters_stack_a(int *stack_a, int *stack_b);
void			check_if_only_numbers(int *stack_a, int *stack_b, int j);
void			check_duplicates_stack_a(int *stack_a, int *stack_b);
void			errors(int *stack_a, int *stack_b);
int				is_special_sign(char *str);
void			tiny_sort(int *stack_a, t_sort *sort);
void			sort(int *stack_a, int *stack_b,
					int *stack_len_a, int *stack_len_b);
void			pa(int *stack_a, int *stack_b, t_sort *sort);
void			pb(int *stack_a, int *stack_b, t_sort *sort);
void			sa(int *stack_a);
void			sb(int *stack_b, int stack_size);
void			ss(int *stack_a, int stack_len);
void			ra(int *stack_a, t_sort *sort);
void 			rb(int *stack_b, t_sort *sort);
void			rr(int *stack_a, int *stack_b, int stack_len);
void			rra(int *stack_a, t_sort *sort);
void			rrb(int *stack_b, t_sort *sort);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			sb_two(int *stack_b, int stack_size);
void			sa_two(int *stack_a);
void			sort_ten(int *stack_a, int *stack_b, t_sort *sort);
int 			find_smallest_int(t_sort *sort);
void			rotate_to_top(int i, int *stack_a, int num, t_sort *sort);
void			sort_five(int *stack_a, int *stack_b, t_sort *sort);
int				find_corr_spot(t_sort *sort, int *stack_a, int *stack_b);
int 			find_nearest(int arr[500], int len);
void			sort_a(int *stack_a, t_sort *sort);
void			sort_hundret(t_sort *sort, int *stack_a, int *stack_b);
int				find_keynbr(t_sort *sort, int *stack_a, int n);
int				find_biggest(t_sort *sort, int *stack_b);
void			push_back_b(t_sort *sort, int *stack_a, int *stack_b);

#endif
