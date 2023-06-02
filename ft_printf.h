/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:03:12 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/02 17:34:51 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXADECIMAL_U "0123456789ABCDEF"
# define HEXADECIMAL_L "0123456789abcdef"
# define DECIMAL "0123456789"
# define FLAGS "-0# +"

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdbool.h>
// For debug
# include <stdio.h>

typedef enum e_flag
{
	HYPHEN = 1 << 0,
	ZERO = 1 << 1,
	HASH = 1 << 2,
	SPACE = 1 << 3,
	PLUS = 1 << 4
}			t_flag;

typedef enum e_type
{
	CHAR,
	STR,
	PTR,
	DEC,
	INT,
	U_DEC,
	HEX_U,
	HEX_L,
	PERCENT
}			t_type;

typedef struct s_placeholder
{
	int		flags;
	int		width;
	int		precision;
	t_type	type;
	char	padding;
}			t_placeholder;

int			ft_printf(const char *fmt, ...);
size_t		ft_putchar_n(char c, size_t n);
size_t		ft_putnbr_base(unsigned long long nbr, char *base);
int			get_digit_count(unsigned long long nbr, size_t base);
size_t		ft_printf_ptr(unsigned long long p, t_placeholder ph);
size_t		ft_printf_int(long long nbr, t_placeholder ph);
size_t		ft_printf_uint(unsigned long long nbr, t_placeholder ph);
size_t		ft_printf_char(char c, t_placeholder ph);
size_t		ft_printf_str(char *s, t_placeholder ph);

#endif
