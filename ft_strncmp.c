/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:04:20 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/10 14:15:36 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main()
{
	char s1[50] = "1234";
	char s2[50] = "1234";
	printf("%d\n", strncmp(s1, s2, 20));
	printf("%d\n", ft_strncmp(s1, s2, 20));
}
*/
