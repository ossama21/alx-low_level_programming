#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);

#endif
