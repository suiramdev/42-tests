/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:55:45 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/22 12:36:39 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[] = "laaa";
	char	str2[] = "OH";

	printf("Sentence: %s\n", str);
	printf("IsLower: %d\n", ft_str_is_lowercase(str));
	printf("Sentence: %s\n", str2);
	printf("IsLower: %d\n", ft_str_is_lowercase(str2));
}
