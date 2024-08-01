/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:17:27 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/24 16:06:07 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}

// int main(void)
// {
// 	int number;
// 	int result;
//
// 	number = -5;
// 	result = ft_iterative_factorial(number);
// 	printf("Fatorial de %d é %d\n", number, result);
// 	return 0;
// }
