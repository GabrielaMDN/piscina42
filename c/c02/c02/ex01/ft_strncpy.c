/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:52:26 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/17 10:49:21 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// unsigned int string_length(char *str)
// {
// 	unsigned int length = 0;
//
// 	while (str[length] != '\0')
// 	{
// 		length++;
// 	}
// 	return (length);
// }
//
// int main()
// {
// 	char src[] = "42 school";
// 	unsigned int src_len = string_length(src); // Calcula o comprimento de src
//
// 	// Define o valor de n para o teste
// 	unsigned int n = 20; // Ajuste este valor para testar diferentes casos
// 	char dest[n + 1]; // +1 para garantir espaço para o caractere nulo
//
// 	// Teste único
// 	ft_strncpy(dest, src, n);
// 	dest[n] = '\0'; // Garantir que dest seja nulo-terminado
//
// 	// Imprime os resultados
// 	printf("Valor de n: %u\n", n);
// 	printf("Comprimento de src: %u\n", src_len);
// 	printf("src: \"%s\"\n", src);
// 	printf("dest: \"%s\"\n", dest);
//	
// 	return 0;
// }