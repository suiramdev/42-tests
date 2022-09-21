/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:00:26 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/20 12:30:23 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	char *s1 = "Hello World!";
	char *s2 = "HellO Worldeuh !";

	if (argc >= 3)
	{
		printf("ft_strcmp > %d\n", ft_strcmp(argv[1], argv[2]));
		printf("strcmp > %d\n", strcmp(argv[1], argv[2]));
	}
	else
	{
		printf("s1: %s\ns2: %s\n", s1, s2);
		printf("ft_strcmp > %d\n", ft_strcmp(s1, s2));
		printf("strcmp > %d\n", strcmp(s1, s2));
	}
}
