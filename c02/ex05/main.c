/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:55:45 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/19 20:50:29 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[] = "la vie vraiment";
	char	str2[] = "OH MY GOD";

	printf("Sentence: %s\n", str);
	printf("IsUpper: %d\n", ft_str_is_uppercase(str));
	printf("Sentence: %s\n", str2);
	printf("IsUpper: %d\n", ft_str_is_uppercase(str2));
}
