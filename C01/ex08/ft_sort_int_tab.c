/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:05:19 by mamada            #+#    #+#             */
/*   Updated: 2026/03/12 19:05:22 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
		}
	}
}	

// int	main()
// {
// 	int size;
// 	int arr[] = {7,8,5,1,2};

// 	size = 5;

// 	ft_sort_int_tab(arr, size);

// 	for(int i = 0; i < size; i++)
// 	{
// 		printf("Sorted: %d", arr[i]);
// 		printf("\n");
// 	}

// 	return 0;
// }