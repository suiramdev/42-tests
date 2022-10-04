/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:03:26 by mnouchet          #+#    #+#             */
/*   Updated: 2022/10/04 17:44:18 by mnouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    **ft_split(char *str, char *charset);

int main()
{
    char str[] = "---This====is~~~not-=~a test!";
    
    char **arr = ft_split(str, "-=~");

    while(*arr)
    {
        printf("%s\n", *arr);
        arr++;
    }

    arr = ft_split("~ ahoy ~", "");
    while(*arr)
    {
        printf("%s\n", *arr);
        arr++;
    }
}
