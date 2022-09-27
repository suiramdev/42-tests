/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:56:38 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/26 20:40:54 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
