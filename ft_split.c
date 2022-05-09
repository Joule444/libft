/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:59:23 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/09 15:35:20 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char sep)
{
	size_t	i;
	size_t	k;
	size_t	words;

	i = 0;
	k = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != sep && k == 0)
		{
			k = 1;
			words++;
		}
		if (s[i] == sep)
			k = 0;
		i++;
	}
	return (words);
}

size_t	count_char(char const *s, char sep)
{
	size_t	i;

	i = 0;
	while (s[i] != sep && s[i])
		i++;
	return (i);
}

void	copy_words(char *dest, const char *src, char sep)
{
	size_t	i;

	i = 0;
	while (src[i] != sep && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char const *s, char sep)
{
	size_t	i;
	size_t	x;
	size_t	y;
	size_t	n;
	char	**arr;

	i = 0;
	x = 0;
	n = 0;
	arr = malloc(sizeof(char *) * count_words(s, sep) + 1);
	while (s[i])
	{
		if (s[i] == sep)
			i++;
		else
		{
			n = count_char(s + i, sep);
			arr[x] = malloc(sizeof(char) * n + 1);
			copy_words(arr[x], s + i, sep);
			x++;
			i += n;
		}
	}
	arr[x] = '\0';
	return (arr);
}

int	main(void)
{
	char	**tab;

	tab = ft_split("_Bonjour_a_tous_", '_');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	free(tab[0]);
	free(tab[1]);
	free(tab[2]);
	free(tab[3]);
	free(tab);
}
