/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:37:26 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/15 15:31:27 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	while (*s1 && n)
	{
		if (*s1 == s2[i])
			i++;
		else
			i = 0;
		if (s2[i] == '\0')
			return ((char*)(s1 - i + 1));
		s1++;
		n--;
	}
	return (NULL);
}
