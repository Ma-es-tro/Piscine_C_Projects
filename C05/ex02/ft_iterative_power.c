/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcha <matcha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 06:16:23 by matcha            #+#    #+#             */
/*   Updated: 2026/03/26 07:58:40 by matcha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int count;
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	count = 0;
	result = 1;
	while (count < power)
	{
		result = result * nb;
		count++;
	}
	return (result);
}

// #include <stdio.h>
// int	main()
// {
// 	int i = ft_iterative_power(2, 4);
// 	printf ("%d\n", i);
// }