/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:55:45 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/22 12:38:12 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = "42 c'est la vie vraiment";
	char	str2[] = "42\nc'est424frojr^R#93 la vie vraiment";
	
	printf("Sentence: %s\n", str);
	printf("IsPrintable: %d\n", ft_str_is_printable(str));
	printf("Sentence: %s\n", str2);
	printf("IsPrintable: %d\n", ft_str_is_printable(str2));
}
