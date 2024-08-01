/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:43:55 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/14 10:33:03 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char u, char d, char c)
{
	write(1, &c, 1);
	write(1, &c, 1);
	write(1, &c, 1);
	if (c != '7' || d != '8' || u != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	while (c <= '7')
	{
		d = c + '1';
		while (d <= '8')
		{
			u = d + '1';
			while (u <= '9')
			{
				ft_putchar(u, d, c);
				u++;
			}
			d++;
		}
		c++;
	}
}
// int	main(void)
// {
// 	ft_print_comb();

// 	return 0;
// }