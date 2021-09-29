#include "my.h"
#include "bsq.h"

int smallest_number(int **arr, int i, int j)
{
    int x;
    int y;
    int z;

    x = arr[i][j - 1];
    y = arr[i - 1][j - 1];
    z = arr[i - 1][j];
    if (x == y && x == z && y == z)
        return (x + 1);
    if (x <= y && x <= z)
        return (x + 1);
    if (y <= x && y <= z)
        return (y + 1);
    if (z <= x && z <= y)
        return (z + 1);
    return (0);
}

int **algorithm_1(int **arr, int rows, int cols)
{
    for (int i = 1; i != rows; i++)
    {
        for (int j = 1; j != cols; j++)
        {
            if (arr[i][j] != 0)
                arr[i][j] = smallest_number(arr, i, j);
        }
    }
    return (arr);
}