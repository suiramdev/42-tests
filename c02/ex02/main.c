/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:17:00 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/22 12:21:36 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "vie";
	char	str2[] = "rejgrhg42828*#^#^*&dddd";
	
	printf("Sentence: %s\n", str);
	printf("IsAlpha: %d\n", ft_str_is_alpha(str));
	printf("Sentence: %s\n", str2);
	printf("IsAlpha: %d\n", ft_str_is_alpha(str2));
}
