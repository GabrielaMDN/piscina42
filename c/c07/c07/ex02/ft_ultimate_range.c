/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:20:55 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/31 12:57:20 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	*range = NULL;
	if (min >= max)
		return (0);
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

/*#include <stdio.h>
int main(void)
{
	int *arr;
	int size = ft_ultimate_range(&arr, 0, 10);
	int i = 0;

	printf("size: %d\n", size);
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/
