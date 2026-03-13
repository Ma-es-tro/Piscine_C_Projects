/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:25:16 by mamada            #+#    #+#             */
/*   Updated: 2026/03/04 20:13:21 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	znak;

	znak = 'z';
	while (znak >= 'a')
	{
		write(1, &znak, 1);
		znak--;
	}
}

//  int	main(void)
//  {
//  	ft_print_reverse_alphabet();
//  	return 0;
//  }