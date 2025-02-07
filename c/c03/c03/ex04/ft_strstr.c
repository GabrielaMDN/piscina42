/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:58:25 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/18 17:42:46 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{	
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int	main() {
//     char str[] = "42 school is the best";
//     char to_find[] = "42";
//
//     char *result = ft_strstr(str, to_find);
//
//     if (result) {
//         printf("Substring encontrada: %s\n", result);
//     } else {
//         printf("Substring não encontrada.\n");
//     }
//
//     return 0;
// }