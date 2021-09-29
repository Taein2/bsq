#include "bsq.h"
#include "my.h"

void put_tab(int **arr, int rows, int cols)
{
    for (int i = 0; i != rows; i++) {
        for (int j = 0; j != cols; j++)
        {
            my_put_nbr(arr[i][j]);
        }
        my_putchar('\n');
    }
}

void put_tab_char(char **tab, int rows, int cols)
{
    for (int i = 0; i != rows; i++)
    {
        write(1, tab[i], cols);
        my_putchar('\n');
    }
}