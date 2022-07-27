/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:18:59 by ssoares-          #+#    #+#             */
/*   Updated: 2022/07/23 21:43:45 by ssoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return ((c == ' '
			|| c == '\t'
			|| c == '\r'
			|| c == '\v'
			|| c == '\n'
			|| c == '\f'));
}

int	ft_atoi(const char *nptr)
{
	int			result;
	int			signal;

	result = 0;
	signal = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
		result = (result * 10) + (*nptr++ - 48);
	if (signal)
		return (result * -1);
	return (result);
}
