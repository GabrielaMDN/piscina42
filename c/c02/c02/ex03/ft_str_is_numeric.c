/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:19:34 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/17 10:48:31 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main()
// {
// char example1[]="0123456789";
// char example2[]="01234 56789";
// char example3[]="";
// char example4[]="42School";
//
// printf("%d\n", ft_str_is_numeric(example1));
// printf("%d\n", ft_str_is_numeric(example2));
// printf("%d\n", ft_str_is_numeric(example3));
// printf("%d\n", ft_str_is_numeric(example4));
//
// }