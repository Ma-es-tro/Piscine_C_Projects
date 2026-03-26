/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcha <matcha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 05:35:21 by matcha            #+#    #+#             */
/*   Updated: 2026/03/26 07:58:36 by matcha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result;
    int count;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);

    result = 1;
    count = 1;
    while (count <= nb)
    {
        result *= count;
        count++;
    }
    return (result);
}

// int	main()
// {
// 	int i = ft_iterative_factorial(4);
// 	int j = ft_iterative_factorial(2);

// 	printf("%d\n", i);
// 	printf("%d", j);
// }