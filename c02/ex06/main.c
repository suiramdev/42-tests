/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:55:45 by mnouchet          #+#    #+#             */
/*   Updated: 2022/09/19 20:52:37 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "42 c'est la vie vraiment";

	printf("Sentence: %s", str);
	printf("IsPrintable: %d", ft_str_is_numeric(str));
	printf("Sentence: %s", str);
	printf("IsPrintable: %d", ft_str_is_numeric(str));
}
