/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:16:14 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/17 10:53:03 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main() 
// {
//     char example1[] = "Hello, World!"; 
//     char example2[] = "Hello\tWorld";
//     char example3[] = "";              
//     char example4[] = "Hello\nWorld";
//
//     printf("%d\n", ft_str_is_printable(example1)); // Esperado: 1
//     printf("%d\n", ft_str_is_printable(example2)); // Esperado: 0
//     printf("%d\n", ft_str_is_printable(example3)); // Esperado: 1
//     printf("%d\n", ft_str_is_printable(example4)); // Esperado: 0
//
//     return 0;
// }