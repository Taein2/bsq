/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeikim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 04:02:40 by taeikim           #+#    #+#             */
/*   Updated: 2021/09/30 04:08:38 by taeikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int err1(char *filepath)
{
    char    *buffer;

    buffer = read_map(filepath);
    if (my_strcmp(buffer, "") == 0)
    {
        my_putstr("Error: Empty File !\n");
        return (-1);
    }
    return (0);
}

int err2(char *filepath)
{
    char    *buffer;
    int     rows_1;
    int     rows_2;
    int     i;

    rows_1 = 0;
    rows_2 = 0;
    i = 0;
    buffer = read_map(filepath);
    rows_1 = ft_getnbr(find_rows(buffer));
    i = my_strlen(find_rows(buffer)) + 1;
    while (buffer[i] != '\0')
    {
        if (buffer[i] == '\n')
            rows_2++;
        i++;
    }
    if (rows_2 != rows_1)
    {
        my_putstr("Error : Invalid size of rows !\n");
        return (-1);
    }
    return (0);
}

int error_3_function(int rows, int first_row)
{
    if (rows != first_row)
    {
        my_putstr("Error : Invalid Size of Columns\n");
        return (-1);
    }
    return (0);
}

int err3(char *filepath)
{
    char    *buffer;
    int     i;
    int     first_row;
    int     rows;
    int     j;

    buffer = read_map(filepath);
    i = my_strlen(find_rows(buffer)) + 1;
    first_row = 0;
    rows = 0;
    while (buffer[i] != '\n')
    {
        first_row++;
        i++;
    }
    i++;
    j = i;
    while (buffer[j] != '\0')
    {
        if (buffer[j] == '\n')
        {
            if (error3_function(rows != first_row) == -1)
                return (-1);
            rows = -1;
        }
        rows++;
    j++;
    }
    return (0);
}