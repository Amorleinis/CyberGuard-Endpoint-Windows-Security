#include <stdio.h>
#include "utils.h"

void log_message(const char *message) {
    FILE *log_file = fopen("cyberguard.log", "a");
    if (log_file != NULL) {
        fprintf(log_file, "%s\n", message);
        fclose(log_file);
    }
}

int calculate_checksum(const char *data, size_t length) {
    int checksum = 0;
    for (size_t i = 0; i < length; i++) {
        checksum += data[i];
    }
    return checksum;
}

void sanitize_input(char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] < 32 || input[i] > 126) {
            input[i] = '?';
        }
    }
}