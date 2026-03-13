/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:04:57 by mamada            #+#    #+#             */
/*   Updated: 2026/03/12 16:05:04 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
}

// int	main()
// {
// 	int size;
// 	int arr[] = {10,20,30,40,50};

// 	size = 5;

// 	ft_rev_int_tab(arr, size);

// 	for(int i = 0; i < size; i++)
// 	{
// 		printf("%d", arr[i]);
// 		printf("\n");
// 	}
// 	return 0;

// }