/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:45:33 by mamada            #+#    #+#             */
/*   Updated: 2026/03/05 12:45:41 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	if (n < 0)
	{
		write(1, "N", 1);
	}
}

//  int main(void)
//  {
//      ft_is_negative(0);
//      ft_is_negative(-2);
// 	      ft_is_negative(10000);
//      ft_is_negative(-22);
// 	      ft_is_negative(0);
//      ft_is_negative(1.5);
// 	      ft_is_negative(4);
//      ft_is_negative(-222);
// 	      ft_is_negative(01);
//      ft_is_negative(-20);
// 	      ft_is_negative(11);
//      ft_is_negative(-02);
//  }