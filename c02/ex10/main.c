/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:08:20 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/19 21:15:29 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "This sentence should be copied";
	char	dest[] = "";

	printf("Sentence: %s\n", src);
	ft_strlcpy(dest, src, 10);
	printf("Copied: %s\n", dest);
	printf("n = %d", 10);
}