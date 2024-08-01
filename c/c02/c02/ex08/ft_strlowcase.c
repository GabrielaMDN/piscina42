/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:11:02 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/17 10:54:40 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr - 'A' + 'a';
		}
		ptr++;
	}
	return (str);
}

// int main()
// {
// 	char str[]="42 SCHOOL IS ROCK";
//
// 	printf("%s\n", str);
//
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// }