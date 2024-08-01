/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:40:18 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/15 14:18:54 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int main()
// {
// 	int a=5;
// 	int b=10;
// 	ft_swap (&a, &b);
// 	printf ("O valor de A é:%d \n", a);
// 	printf ("O valor de B é:%d", b);
// }