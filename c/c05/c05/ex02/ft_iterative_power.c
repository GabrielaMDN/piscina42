/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:28:10 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/25 15:06:03 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int main()
{
	int nb;
	int power;
	int result;

	nb = 2;
	power = 3;

	result = ft_iterative_power(nb, power);
	printf("O número %d, elevado a %d, é igual a %d", nb, power, result);
	return (0);
}*/