/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:51:56 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/17 10:42:43 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
			str++;
	}
	return (1);
}

// int main()
// {
// 	char example1[]="BESTSCHOOL";
// 	char example2[]="BEST SCHOOL";
// 	char example3[]="";
// 	char example4[]="42SCHOOL";
//
// 	printf("%d\n", ft_str_is_uppercase(example1));
// 	printf("%d\n", ft_str_is_uppercase(example2));
// 	printf("%d\n", ft_str_is_uppercase(example3));
// 	printf("%d\n", ft_str_is_uppercase(example4));
// }