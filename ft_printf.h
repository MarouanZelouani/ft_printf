/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:34:21 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/30 13:49:25 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// the path to libft header file
int		ft_printf(const char *str, ...);
int		print_character(char c);
int		print_string(char *s);
int		print_integer(int number);
int		print_hexa(unsigned int number, char c);
int		print_pointer(uintptr_t number);
int		print_unsigned(unsigned int number);
int		ft_toupper(int c);
int		ft_isalpha(int c);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
