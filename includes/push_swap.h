/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:02:05 by nsabia            #+#    #+#             */
/*   Updated: 2023/12/06 15:07:35 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

void			check_parameters(int argc, char *argv[],
					int *stack_a, int *stack_b);
int				*push_in_stack(int *stack_size, char *argv[],
					int *stack_a, int *stack_b);
void			check_duplicates(char *argv[], int *stack_a, int *stack_b);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_isalpha(int c);
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
int				ft_isdigit(int c);
int				is_special_sign(int c);
void			errors(int *stack_a, int *stack_b);
void			tiny_sort(int *stack_a, int stack_len);
void			sort(int *stack_a, int *stack_b,
					int *stack_len_a, int *stack_len_b);
void			pa(int *stack_a, int *stack_b,
					int *stack_len_a, int *stack_len_b);
void			pb(int *stack_a, int *stack_b,
					int *stack_len_a, int *stack_len_b);
void			sa(int *stack_a);
void			sb(int *stack_b, int stack_size);
void			ss(int *stack_a, int stack_len);
void			ra(int *stack_a, int stack_len);
void			rb(int *stack_b, int stack_len);
void			rr(int *stack_a, int *stack_b, int stack_len);
void			rra(int *stack_a, int stack_len);
void			rrb(int *stack_b, int stack_len);
int				pseudo_ra(int *stack_a, int stack_len, int counter);
int				pseudo_ra(int *stack_a, int stack_len_a, int counter);
int				pseudo_rra(int *stack_a, int stack_len_a, int counter);
int				pseudo_rb(int *stack_b, int len_b, int counter);
void			pseudo_pb(int number, int *stack_len_b, int **stack_b);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			execute_cheapest(int executable, int *stack_a,
					int *stack_len_a);
int				find_pseudo_spot_in_b(int number, int *stack_len_b,
					int *stack_b);
int				find_spot_in_b(int number, int *stack_len_b, int *stack_b);
int				find_cheapest_move(int *stack_a, int *stack_b,
					int *stack_len_a, int *stack_len_b);
int				perform_rotation(int *stack, int stack_len,
					int number, int is_reverse);
int				calculate_move_cost(int *stack_a, int *stack_b,
					int *stack_len_a, int *stack_len_b);
void			do_exception(int *stack_a, int *stack_b,
					int *stack_len_a, int *stack_len_b);

#endif
