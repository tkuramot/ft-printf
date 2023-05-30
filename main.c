/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:17:30 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/30 21:23:35 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "aaaaaaa";
	const char	*s2 = NULL;

	printf("==========%%s==========\n");
	printf("%d\n", printf("%s\n", s1));
	printf("%d\n", ft_printf("%s\n", s1));
	printf("%d\n", printf("%s\n", s2));
	printf("%d\n", ft_printf("%s\n", s2));
	printf("==========%%d==========\n");
	printf("%d\n", printf("%d\n", 120));
	printf("%d\n", ft_printf("%d\n", 120));
	printf("%d\n", printf("%d\n", 0));
	printf("%d\n", ft_printf("%d\n", 0));
	printf("%d\n", printf("%d\n", INT_MAX));
	printf("%d\n", ft_printf("%d\n", INT_MAX));
	printf("%d\n", printf("%d\n", INT_MIN));
	printf("%d\n", ft_printf("%d\n", INT_MIN));
	printf("==========%%p==========\n");
	printf("%d\n", printf("%p\n", (void *)LONG_MAX));
	printf("%d\n", ft_printf("%p\n", (void *)LONG_MAX));
	printf("%d\n", printf("%p\n", (void *)LONG_MIN));
	printf("%d\n", ft_printf("%p\n", (void *)LONG_MIN));
	printf("%lx\n", (unsigned long)LONG_MIN);
	printf("%lu\n", (unsigned long)LONG_MIN);
	return (0);
}
