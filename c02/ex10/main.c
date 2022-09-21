/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:08:20 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/20 19:32:45 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "This sentence should be copied";
	char	dest[] = "";

	printf("Sentence: %s\n", src);
	printf("length = %d\n", ft_strlcpy(dest, src, 10));
	printf("Copied: %s\n", dest);
	printf("n = %d", 10);
}
