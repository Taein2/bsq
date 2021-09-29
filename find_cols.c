/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cols.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeikim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:18:38 by taeikim           #+#    #+#             */
/*   Updated: 2021/09/30 03:39:43 by taeikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int my_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int find_cols(char *buffer)
{
    int i;
    int cols;

    i = my_strlen(find_rows(buffer)) + 1;
    cols = 0;
    while (buffer[i] != '\n')
    {
        cols++;
        i++;
    }
    return (cols);
}