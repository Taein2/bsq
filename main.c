/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeikim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:10:42 by taeikim           #+#    #+#             */
/*   Updated: 2021/09/30 03:49:08 by taeikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#define BUF_SIZE 4096

int find_size(char *map)
{
    int     fd;
    int     ret;
    int     size;
    char    *buffer;

    size = 0;
    buffer = (char *)malloc(sizeof(char) * BUF_SIZE);
    fd = open(map, O_RDONLY);
    ret = read(fd, buffer, BUF_SIZE);
    if (ret <= 0)
    {
        return (-1);
    }
    size = ret;
    while (ret > 0)
    {
        ret = read(fd, buffer, BUF_SIZE);
        size += ret;
    }
    close(fd);
    free(buffer);
    return (size);
}

char    *read_map(char *map)
{
    int     ret;
    int     fd;
    char    *buffer;
    int     size;

    fd = open(map, O_RDONLY);
    if (fd == -1)
    {
        my_putstr("Open Error!\n");
        return (NULL);
    }
    size = find_size(map);
    buffer = (char *)malloc(sizeof(char) * size + 1);
    ret = read(fd, buffer, size);
    if (ret == -1)
    {
    my_putstr("Read Error!\n");
    return (NULL);
    }
    buffer[size] = '\0';
    if (close(fd) == -1)
        return (NULL);
    return (buffer);
}

int main(int argc, char **argv)
{
    char    *buffer;
    int     **dp;
    char    **map;
    int     rows;
    int     cols;

    if (read_map(argv[1]) == 0 || argc == 1)
        return (-1);
    else if (err1(argv[1]) == -1 || err2(argv[1]) == -1 \
            || err3(argv[1]) == -1)
        return (-1);
    else
    {
        buffer = read_map(argv[1]);
        rows = ft_getnbr(find_rows(buffer));
        cols = find_cols(buffer);
        dp = malloc_2d_array(rows, cols);
        map = malloc_2d_tab(rows, cols);
        fill_tab(dp, buffer, rows, cols);
        fill_tab_char(map, buffer, rows, cols);
        algorithm_1(dp, rows, cols);
        algorithm_2(map, dp, rows, cols);
        put_tab_char(map, rows, cols);
    }
    return (0);
}