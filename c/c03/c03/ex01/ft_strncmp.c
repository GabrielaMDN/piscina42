/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:06:06 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/18 17:27:05 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char) *s1 - (unsigned char) *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		return ((unsigned char) *s1 - (unsigned char) *s2);
	}
	return (0);
}

// int main() {
//     char *string1 = "Papelaria";
//     char *string2 = "Papel";
// 	unsigned int n = 2;
// 
//     int result = ft_strncmp(string1, string2, n);
//
//     printf("%i\n", result);
//  
//     return 0;
// }