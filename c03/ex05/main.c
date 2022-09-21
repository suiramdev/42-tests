/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:12:28 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/20 20:51:23 by mnouchet         ###   ########.fr       */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "\nHow is it going?";
	char dest[] = "Hello World!";

	printf("len: %d\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
}
