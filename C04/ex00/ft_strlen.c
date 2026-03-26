/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcha <matcha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 08:19:03 by matcha            #+#    #+#             */
/*   Updated: 2026/03/26 08:19:07 by matcha           ###   ########.fr       */
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

int	main()
{
	ft_strlen("Hello");
	return 0;
}