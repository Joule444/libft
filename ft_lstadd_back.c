/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:55:10 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/13 14:50:35 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (lst)
	{
		if (*lst)
		{
			a = ft_lstlast(*lst);
			a->next = new;
			new->next = NULL;
			a = new;
		}
		else
			*lst = new;
	}
}
