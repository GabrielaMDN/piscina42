/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:59:36 by gabminob          #+#    #+#             */
/*   Updated: 2024/07/13 13:56:50 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Implementação da função
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// int main(void)
// {
// 	ft_putchar();

// 	return 0;
// }