/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:47:28 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/26 13:12:58 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(23, "0123456789");
	printf("\n");
	ft_putnbr_base(23, "01");
	printf("\n");
	ft_putnbr_base(17, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(8, "poneyvif");
	printf("\n");
}
