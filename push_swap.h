/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:16:22 by nsabia            #+#    #+#             */
/*   Updated: 2023/11/21 11:04:07 by nsabia           ###   ########.fr       */
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
void			check_duplicates(int argc, char *argv[],
					int *stack_a, int *stack_b);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_isalpha(int c);
int				ft_atoi(const char *nptr);
long long int	ft_strtoll(const char *nptr, char **endptr, int base);
int				*push_in_stack(int argc, char *argv[], int *stack_a);

#endif
