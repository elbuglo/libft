/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 02:47:50 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/15 15:43:17 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (n != 0 && (unsigned char)s1[i] != 0 && (unsigned char)s2[i] != 0
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
	{
		i++;
		n--;
	}
	return (n == 0 ? 0 : ((unsigned char)s1[i] - (unsigned char)s2[i]));
}
