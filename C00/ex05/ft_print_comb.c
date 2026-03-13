/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:59:59 by mamada            #+#    #+#             */
/*   Updated: 2026/03/05 18:06:13 by mamada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
#include <stdbool.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	wrt_cmb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7' && b == '8' && c == '9')
	{
		return ;
	}
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				wrt_cmb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

//  int	main(void)
//  {
//      ft_print_comb();
//      return 0;
//  }
