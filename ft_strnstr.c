/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:50:53 by ssoares-          #+#    #+#             */
/*   Updated: 2022/07/25 04:25:13 by ssoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_size;

	i = 0;
	little_size = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	while (*big && (i <= len))
	{
		if ((ft_strncmp(big, little, little_size) == 0)
			&& (i + little_size <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
