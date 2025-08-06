#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

// Function prototypes for utility functions
void log_message(const char *message);
int read_file(const char *filename, char **buffer);
void free_buffer(char *buffer);

#endif // UTILS_H