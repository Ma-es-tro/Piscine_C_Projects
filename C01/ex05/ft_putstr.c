/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:49:19 by mamada            #+#    #+#             */
/*   Updated: 2026/03/12 19:49:22 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

// int	main()
// {
// 	ft_putstr("Hello,World\n");
// 	return 0;
// }
