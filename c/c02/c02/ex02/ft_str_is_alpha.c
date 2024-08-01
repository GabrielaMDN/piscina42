/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:34:59 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/17 10:50:26 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{	
	if (*str == '\0')
	{	
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main()
// {
// 	char example1[]="School";
// 	char example2[]="Best School";
// 	char example3[]="";
// 	char example4[]="42school";
//
// 	printf("%d\n",ft_str_is_alpha(example1));
// 	printf("%d\n",ft_str_is_alpha(example2));
// 	printf("%d\n",ft_str_is_alpha(example3));
// 	printf("%d\n", ft_str_is_alpha(example4));
//
// }