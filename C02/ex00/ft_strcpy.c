/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:49:56 by mamada            #+#    #+#             */
/*   Updated: 2026/03/13 09:50:00 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return dest;
}

// int	main()
// {
// 	char dest[20];

// 	ft_strcpy(dest,"Hello");
// 	printf("Copy: %s", dest);
// 	return 0;

// }

