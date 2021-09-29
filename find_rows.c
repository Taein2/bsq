/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeikim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:11:03 by taeikim           #+#    #+#             */
/*   Updated: 2021/09/30 03:12:03 by taeikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

int ft_getnbr(char *str)
{
    int     i;
    long    n;

    i = 0;
    n = 0;
    while (str[i] >= 48 && str[i] <= 57)
    {
        n = (n * 10) + (str[i] - 48);
        i++;
    }
    return (n);   
}

char *find_rows(char *buffer)
{
    char    *number;
    int     i = 0;
    int     len = 0;

    while (buffer[len] != '\n')
        len++;
    number = malloc(sizeof(char) * (len + 1));
    while (buffer[i] != '\n')
    {
        number[i] = buffer[i];
        i++;
    }
    number[i] = '\0';
    return (number);
}
