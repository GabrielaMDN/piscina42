/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:46:05 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/23 09:34:12 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

// int main()
// {
// 	char str[]="Gabriela";
//
// 	int	len;
//
// 	len = ft_strlen(str);
//
// 	printf("%s, %i\n", str, len);
// 	return 0;
// }
