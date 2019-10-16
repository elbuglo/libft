/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:02:29 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/16 21:07:30 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	i = 0;
	dst = str1;
	src = str2;
	while (i < n && (i == 0 || src[i - 1] != (unsigned char)c))
	{
		dst[i] = src[i];
		i++;
	}
	if (i > 0 && src[i - 1] == (unsigned char)c)
		return (dst + i);
	else
		return (NULL);
}
