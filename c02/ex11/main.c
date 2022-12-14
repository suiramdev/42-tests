/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:50:35 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/22 16:32:26 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int	main(int argc, char *argv[])
{
	char	str[10];

	str[0] = '\200';
	str[1] = -67;
	str[2] = -32;
	if (argc >= 2)
		ft_putstr_non_printable(argv[1]);
	else
		ft_putstr_non_printable(str);
}
