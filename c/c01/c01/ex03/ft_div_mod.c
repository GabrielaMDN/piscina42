/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:08:26 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/15 15:23:44 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main()
// {
// 	int a=10;
// 	int b=2;
// 	int div;
// 	int mod;
// 	ft_div_mod (a, b, &div, &mod);
// 	printf ("O valor da divisão é:%d \n", div);
// 	printf ("O valor do resto da divisão é:%d", mod);	
// }