/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:23:52 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/04 14:20:16 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;
	void				*tmp;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char s[10] = "salut";
	char d[10] = "sava?";
	printf("%p\n", ft_memcpy(d, s, 5));
	printf("%p\n", memcpy(d, s, 5));
	printf("%s\n", (char *)ft_memcpy(d, s, 5));
	printf("%s\n", (char *)memcpy(d, s, 5));
}
*/
