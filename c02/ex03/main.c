/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:55:45 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/19 20:44:56 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "42";
	char	str2[] = "42 c'est la vie vraiment";
	
	printf("Sentence: %s\n", str);
	printf("IsNumeric: %d\n", ft_str_is_numeric(str));
	printf("Sentence: %s\n", str2);
	printf("IsNumeric: %d\n", ft_str_is_numeric(str2));
}
