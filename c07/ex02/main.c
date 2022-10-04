/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 01:13:57 by mnouchet          #+#    #+#             */
/*   Updated: 2022/10/02 15:18:36 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	(void)argc;
	int	min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int	*range;
	ft_ultimate_range(&range, min, max);
	int i = 0;

	while (min < max)
	{
		printf("%d ", range[i]);
		i++;
		min++;
	}
}
