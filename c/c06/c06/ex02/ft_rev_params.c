/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:28:35 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/28 14:31:23 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
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

int	main(int argc, char **argv)
{
	int	i;

	i = argc -1;
	while (i >= 1)
	{
		write(1, argv[i], ft_len(argv[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
