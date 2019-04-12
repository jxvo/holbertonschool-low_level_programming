#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>

char *_strdup(char *str);
char *_strchr(char *str, int chr);
size_t _strlen(const char *str);
char **tokenizer(char *str, char *delim);

#endif
