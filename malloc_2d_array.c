#include "my.h"
#include "bsq.h"

int **malloc_2d_array(int rows, int cols)
{
    int **arr;
    int i = 0;

    arr = malloc(sizeof(int *) * rows);
    for (i = 0; i != rows; i++)
        arr[i] = malloc(sizeof(int) * cols);
    arr[i] = NULL;
    return (arr);
}

char **malloc_2d_tab(int rows, int cols)
{
    char **tab;
    int i = 0;

    tab = malloc(sizeof(char *) * rows);
    for (i = 0; i != rows; i++)
        tab[i] = malloc(sizeof(char) * cols);
    tab[i] = NULL;
    return (tab);
}