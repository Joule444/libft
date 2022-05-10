/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:13:13 by jthuysba          #+#    #+#             */
/*   Updated: 2022/05/10 13:53:59 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nbr_len(int n)
{
	size_t	i;
	int		nb;

	nb = n;
	i = 1;
	if (nb < 0)
		nb *= -1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	put_nbr(char *str, int n, size_t i)
{
	int	neg;

	neg = 0;
	if (n == -2147483648)
	{
		ft_strlcpy (str, "-2147483648", 12);
		return (0);
	}
	if (n < 0)
	{
		n = n * -1;
		neg = 1;
	}
	if (i > 0)
		put_nbr(str, n / 10, --i);
	str[i] = (n % 10) + '0';
	return (neg);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = 0;
	if (n < 0)
		len++;
	len += nbr_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (put_nbr(str, n, len))
		str[0] = '-';
	return (str);
}
/*
int	main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-424545));
	printf("%s\n", ft_itoa(424545));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));

}
*/
