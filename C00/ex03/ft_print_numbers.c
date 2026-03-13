/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:43:41 by mamada            #+#    #+#             */
/*   Updated: 2026/03/05 18:43:46 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	znak;

	znak = '0';
	while (znak <= '9')
	{
		write(1, &znak, 1);
		znak++;
	}
}

//  int main (void){
//  	ft_print_numbers();

//  	return 0;
//  }
