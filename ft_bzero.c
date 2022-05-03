/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:59:54 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/03 16:01:16 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ps;

	i = 0;
	ps = s;
	while (i < n)
	{
		ps[i] = '\0';
		i++;
	}
}
