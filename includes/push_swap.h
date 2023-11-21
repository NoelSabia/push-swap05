/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:02:05 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/21 18:55:44 by nsabia           ###   ########.fr       */
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
void			check_duplicates(char *argv[], int *stack_a, int *stack_b);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_isalpha(int c);
int				ft_atoi(const char *nptr);
long long int	ft_strtoll(const char *nptr, int base);
int				*push_in_stack(int argc, char *argv[], int *stack_a);
int				is_sorted(int argc, int *stack);
char			**ft_split(const char *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
size_t			ft_strlen(const char *s);

#endif