/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:12:28 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/20 18:36:47 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src[28] = " How is it going?";
	char dest[28] = "Hello World!";
	char src2[28] = " How is it going?";
	char dest2[28] = "Hello World!";
	
	printf("%s\n", ft_strncat(dest, src, 5));
	printf("%s\n", ft_strncat(dest2, src2, 20));
}
