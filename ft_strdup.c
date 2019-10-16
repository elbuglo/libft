/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 23:23:29 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/15 15:48:53 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = -1;
	if (!dest || !src)
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char *dest;

	if (!src)
		return (NULL);
	if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
