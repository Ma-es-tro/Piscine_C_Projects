/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:24:01 by mamada            #+#    #+#             */
/*   Updated: 2026/03/04 19:55:37 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	znak;

	znak = 'a';
	while (znak <= 'z')
	{
		write(1, &znak, 1);
		znak++;
	}
}

//  int	main(void)
//  {
//  	ft_print_alphabet();
//  	return 0;
//  }
