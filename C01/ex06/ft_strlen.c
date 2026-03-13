/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:51:22 by mamada            #+#    #+#             */
/*   Updated: 2026/03/12 19:51:24 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int count;

	count = 0;

	while(str[count] != '\0')
	{
		count++;
	}

	return count;
}

// int	main()
// {
// 	ft_strlen("Hello");
// 	return 0;
// }
