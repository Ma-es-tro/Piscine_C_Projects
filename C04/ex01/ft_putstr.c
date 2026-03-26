/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcha <matcha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 08:19:44 by matcha            #+#    #+#             */
/*   Updated: 2026/03/26 08:19:52 by matcha           ###   ########.fr       */
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