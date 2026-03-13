/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:55:17 by mamada            #+#    #+#             */
/*   Updated: 2026/03/09 10:25:17 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	prt_int(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = (a / 10) + '0';
	a2 = (a % 10) + '0';
	b1 = (b / 10) + '0';
	b2 = (b % 10) + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a == 98)
	{
		return ;
	}
	ft_putchar(',');
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			prt_int(a, b);
			b++;
		}
		a++;
	}
}

//  int main(void)
//  {
//  	ft_print_comb2();
//  	return 0;
//  }
