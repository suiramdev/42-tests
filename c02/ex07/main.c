/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:55:45 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/19 19:00:56 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "42 c'est la vie vraiment";

	printf("Sentence: %s", str);
	printf("IsNumeric: %d", ft_str_is_numeric(str));
}
