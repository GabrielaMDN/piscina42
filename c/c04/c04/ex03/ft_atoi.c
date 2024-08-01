/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:34:29 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/23 09:39:51 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || \
	str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || \
	str[i] == '\f' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}	

// int main(int argc, char **argv)
// {
//     if (argc < 2)
//     {
//         printf("Uso: %s <numero>\n", argv[0]);
//         return 1;
//     }
//
//     int numero_convertido = ft_atoi(argv[1]);
//     printf("Número convertido: %d\n", numero_convertido);
//
//     return 0;
// }