/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:08:20 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/19 19:02:34 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "This sentence should be copied";
	char	dest[] = "";

	printf("Original: %s\n", src);	
	printf("Copied: %s\n", ft_strcpy(dest, src));
}
