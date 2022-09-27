/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:53:26 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/26 11:19:36 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void) 
{
	char	str[] = "HelloWWWWorld, how are you doing ?";
	char	pattern[] = "";
	char	pattern2[] = "g ?tt";

	printf("%s\n", ft_strstr(str, pattern));
	printf("%s\n", ft_strstr("", ""));
	printf("%s\n", ft_strstr("", pattern2));
}
