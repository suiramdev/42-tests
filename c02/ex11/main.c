/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:50:35 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/20 10:52:46 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int	main(int argc, char *argv[])
{
	if (argc >= 2)
		ft_putstr_non_printable(argv[1]);
	else
		ft_putstr_non_printable("Hello World!\nHow are you?");
}
