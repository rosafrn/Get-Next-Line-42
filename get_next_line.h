
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

# define FD_MAX 65534
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char *get_next_line(int fd);
char * ft_strdup(const char *s);
char *ft_substr(char *s, size_t i);
char	*ft_strnjoin(char *s1, char *s2, size_t n);


#endif