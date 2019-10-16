/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:46:55 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/16 20:57:22 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	i = 0;
	if ((!str2))
		return (str1);
	dest = str1;
	src = str2;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (str1);
}
