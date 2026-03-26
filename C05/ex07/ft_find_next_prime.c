/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcha <matcha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 07:54:44 by matcha            #+#    #+#             */
/*   Updated: 2026/03/26 07:58:56 by matcha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
    	i++;
    }
	return (1);
}

int ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;

	while (ft_is_prime(nb) == 0)
		nb++;

	return (nb);
}

// int	main()
// {
// 	int j = ft_find_next_prime(11);
// 	printf("%d", j);
// }