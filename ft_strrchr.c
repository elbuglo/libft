/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:51:36 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/15 15:30:40 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
		i++;
	while (i > 1)
	{
		if (str[i] == (char)c)
			return ((char*)str + i);
		i--;
	}
	if (*str == (char)c)
		return ((char*)str);
	return (NULL);
}
