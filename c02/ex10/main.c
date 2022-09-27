/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:08:20 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/22 11:50:28 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "This sentence should be copied";
	char	dest[20];
	char	dest2[20];

	printf("Sentence: %s\n", src);
	printf("w/ ft_strlcpy: %d\n%s\n", ft_strlcpy(dest, src, 10), dest);
	printf("w/ strlcpy: %lu\n%s", strlcpy(dest2, src, 10), dest2);
}
