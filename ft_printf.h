/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:44:13 by akhamass          #+#    #+#             */
/*   Updated: 2024/01/13 17:44:15 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const char *__format, ...);
int		prt_str(char const *str);
int		prt_ptr(void *ptr_addr);
int		prt_int(int n);
int		prt_unsigned(unsigned int nbr);
int		prt_hexa(unsigned int nbr, bool upper_case);

#endif
