#include "unix_utils.h"

// Function to check if a file exists
int file_exists(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file) {
        fclose(file);
        return 1; // File exists
    }
    return 0; // File does not exist
}

// Function to get the current working directory
char* get_current_working_directory() {
    char *cwd = malloc(PATH_MAX);
    if (getcwd(cwd, PATH_MAX) != NULL) {
        return cwd; // Return the current working directory
    }
    free(cwd);
    return NULL; // Error occurred
}

// Function to log messages to a file
void log_message(const char *message) {
    FILE *log_file = fopen("cyberguard.log", "a");
    if (log_file) {
        fprintf(log_file, "%s\n", message);
        fclose(log_file);
    }
}