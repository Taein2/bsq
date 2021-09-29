#ifndef __BSQ_H__
# define __BSQ_H__

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr_function(long nb);
int my_put_nbr(int nb);
int find_cols(char *buffer);
int my_strlen(char *str);
char *find_rows(char *buffer);
int ft_getnbr(char *str);
int find_size(char *map);
char *read_map(char *map);
int **malloc_2d_array(int rows, int cols);
char **malloc_2d_tab(int rows, int cols);
int **fill_tab(int **arr, char *buffer, int rows, int cols);
char **fill_tab_char(char **tab, char *buffer, int rows, int cols);
void put_tab(int **arr, int rows, int cols);
void put_tab_char(char **tab, int rows, int cols);
int **algorithm_1(int **arr, int rows, int cols);
char **algorithm_2(char **tab, int **arr, int rows, int cols);
int err1(char *filepath);
int err2(char *filepath);
int err3(char *filepath);

#endif /*__BSQ_H__*/