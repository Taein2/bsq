#include "bsq.h"

int **fill_tab(int **arr, char *buffer, int rows, int cols)
{
    int idx;

    idx = my_strlen(find_rows(buffer)) + 1;
    for (int i = 0; i != rows; i++)
    {
        for (int j = 0; j != cols; j++)
        {
            if (buffer[idx] == '.')
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
            idx++;
        }
        idx++;
    }
    return (arr);
}

char **fill_tab_char(char **tab, char *buffer, int rows, int cols)
{
    int idx;

    idx = my_strlen(find_rows(buffer)) + 1;
    for (int i = 0; i != rows; i++) {
        for (int j = 0; j != cols; j++) {
            tab[i][j] = buffer[idx];
        idx++;
        }
    idx++;
    }
    return (tab);
}