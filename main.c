/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulebugl <lulebugl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:04:27 by lulebugl          #+#    #+#             */
/*   Updated: 2019/10/17 00:04:28 by lulebugl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	affiche(void *content)
{
	ft_putstr_fd((char*)content,1);
	ft_putstr_fd("  ",1);
}
void	del(void *content)
{
	free(content);
	content = NULL;
}

void	print(t_list *l)
{
	printf("size == %d \n", ft_lstsize(l));
	ft_putstr_fd("[",1);
	ft_lstiter(l,affiche);
	ft_putstr_fd("]",1);
	ft_putstr_fd("\n",1);
	
	
}

void*	mappy(void *content)
{
	return ((void*)ft_itoa(ft_atoi(content) * ft_atoi(content)));
}

int main(int argc, char const *argv[])
{
	t_list  *l = ft_lstnew(ft_strdup("debut"));
	t_list  *m;

	if (argc == 1)
	{
		ft_putstr_fd("\tUsage : ./a.out -argv(1) ... -argv(n)\n", 1);
		return (0);
	}
	for (size_t i = 1; i < argc ; i++)
	{
		ft_lstadd_back(&l, ft_lstnew(ft_strdup(argv[i])));
	}

	print(l);
	ft_lstclear(&l,del);
	print(l);
	for (size_t i = 1; i < argc ; i++)
	{
		ft_lstadd_front(&l,ft_lstnew(ft_strdup(argv[i])));
	}
	
	print(l);
	
	ft_putstr_fd("last element -> ", 1); 
	affiche(ft_lstlast(l)->content);
	ft_putchar_fd('\n', 1);
	
	m = ft_lstmap(l, &mappy);
	print(m);
	ft_lstclear(&m,del);
	ft_lstclear(&l,del);
	
	return 0;
}

