/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:47:29 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/10 13:54:21 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_str(char const *s, char const c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (check_str(set, s1[i]) && s1[i])
		i++;
	while (check_str(set, s1[j]) && j > 0)
		j--;
	dest = malloc(sizeof(char) * (j - i + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1 + i, j - i + 2);
	dest[j + 1] = '\0';
	return (dest);
}
/*
int main(void)
{
	printf("%s", ft_strtrim("00test00","0test"));
}
*/
