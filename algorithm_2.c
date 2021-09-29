#include "my.h"
#include "bsq.h"

int biggest_number(int **arr, int rows, int cols)
{
    int bigger_nb = 0;

    for (int i = 0; i != rows; i++)
    {
        for (int j = 0; j != cols; j++)
        {
            if (arr[i][j] > bigger_nb)
                bigger_nb = arr[i][j];
        }
    }
    return (bigger_nb);
}

int get_i(int **arr, int rows, int cols, int nb)
{
    for (int i = 0; i != rows; i++)
    {
        for (int j = 0; j != cols; j++)
        {
            if (arr[i][j] == nb)
                return (i);
        }
    }
    return (0);
}

int get_j(int **arr, int rows, int cols, int nb)
{
    for (int i = 0; i != rows; i++)
    {
        for (int j = 0; j != cols; j++)
        {
            if (arr[i][j] == nb)
                return (j);
        }
    }
    return (0);
}

char **algorithm_2(char **tab, int **arr, int rows, int cols)
{
    int nb;
    int i;
    int j;

    nb = biggest_number(arr, rows, cols);
    i = get_i(arr, rows, cols, nb);
    j = get_j(arr, rows, cols, nb);
    for (int a = i - (nb - 1); a <= i; a++) {
        for (int b = j - (nb - 1); b <= j; b++)
            tab[a][b] = 'x';
    }
    return (tab);
}