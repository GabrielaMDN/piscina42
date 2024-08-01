/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:28:53 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/17 10:51:21 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main()
// {
// 	char example1[]="bestschool";
// 	char example2[]="best school";
// 	char example3[]="";
// 	char example4[]="42school";
//
// 	printf("%d\n", ft_str_is_lowercase(example1));
// 	printf("%d\n", ft_str_is_lowercase(example2));
// 	printf("%d\n", ft_str_is_lowercase(example3));
// 	printf("%d\n", ft_str_is_lowercase(example4));
// }