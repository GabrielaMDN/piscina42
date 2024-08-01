/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:24:32 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/24 16:09:38 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power != 0)
		return (nb * (ft_recursive_power(nb, power - 1)));
	else
		return (1);
}

// int main()
// {
// 	int number;
// 	int power;
// 	int result;
//
// 	number = 2;
// 	power = 3;
//
// 	result = ft_recursive_power(number, power);
// 	printf("O número %d elevado a %d é igual a %d\n ", number, power, result);
// }