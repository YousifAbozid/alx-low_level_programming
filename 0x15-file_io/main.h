#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

int open_file(const char *filename, int flags, mode_t mode);
void close_file(int fd);
void print_error_and_exit(const char *message, const char *arg, int exit_code);

#endif /* MAIN_H */
