#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int create_file(const char *filename, char *text_content);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void error_exit(int code, const char *message);
void print_elf_header_info(Elf64_Ehdr *header)

#endif
