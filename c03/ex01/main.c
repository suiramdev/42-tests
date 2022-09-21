/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:00:26 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/20 14:09:58 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *s1 = "Hello World!";
	char *s2 = "Hell0 Worldeuh !";

	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp > %d\n", ft_strncmp(s1, s2, 5));
	printf("strncmp > %d\n", strncmp(s1, s2, 5));
}
