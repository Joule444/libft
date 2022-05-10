/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:17:30 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/10 14:47:30 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(s));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
/*
char	f_a(unsigned int i, char c)
{
	return(c - 32);
}

int main()
{
    const    char    s[10] = "abdcef";

    printf("%s\n", ft_strmapi(s, &f_a));

}
*/
