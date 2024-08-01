/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:22:16 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/15 15:24:03 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a;
	rest = *b;
	*a = div / rest;
	*b = div % rest;
}
// int main ()
// {
// 	int a = 10;
// 	int b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("O valor da divisão é:%d /n ", a);
// 	printf("O resto da divisão é %d", b);
// }