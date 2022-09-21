/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:08:20 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/21 21:27:24 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "This sentence should be copied";
	char	dest[7];
	char	destR[7];

	printf("Original: %s\n", src);	
	printf("Copied ft: %s\n", ft_strcpy(dest, src));
	printf("Copied real: %s\n", strcpy(destR, src));
}
