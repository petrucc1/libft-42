/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoares- <ssoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 04:47:48 by ssoares-          #+#    #+#             */
/*   Updated: 2022/07/25 02:20:19 by ssoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		size;

	size = ft_strlen(s1) + 1;
	dest = (char *)malloc(size);
	if (dest)
		ft_strlcpy(dest, s1, size);
	return (dest);
}
