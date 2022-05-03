/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:20:55 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/03 16:26:18 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ps;

	i = 0;
	ps = s;
	while (i < n)
	{
		ps[i] = c;
		i++;
	}
	return (s);
}
