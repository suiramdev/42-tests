/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:03:26 by mnouchet          #+#    #+#             */
/*   Updated: 2022/10/04 17:26:44 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**split;
	int		i;

	(void)argc;
	(void)argv;
	char str[] = "test,stuffgoes,here";
	split = ft_split(str, "");
	if (!split)
		return (0);
	i = 0;
	while (split[i])
	{
		printf("%d:\n", i);
		printf("%s\n", split[i]);
		i++;
	}
}
