/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:23:34 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/06 12:15:24 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	i = 0;
	ps = s;
	while (i < n)
	{
		if (ps[i] = c)
			return (ps + i);
		i++;
	}
	return (NULL);
}

int main()
{
    char    s[50] = "MOMO";

    printf("%p\n", ft_memset(s, 'a', 2));
    printf("%p\n", memset(s, '.', 2));
}
